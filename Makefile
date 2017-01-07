# sudo apt-add-repository ppa:skettler/php
# apt-get source php52
UNPACKED_SOURCE=php52
DIST=trusty
VERSION=5.2.17~ppa3~$(DIST)
BASENAME=php52_$(VERSION)
ARCH=amd64
BUILD_AREA=build-area
CCACHE=$(HOME)/.ccache
DEBUILD=/usr/bin/debuild
PBUILDER_CACHE=$(HOME)/pbuilder
PBUILDER_DIST=/usr/bin/pbuilder-dist
PBUILDERRC=$(HOME)/.pbuilderrc

all: build

build: \
	$(BASENAME)_$(ARCH).deb \
	$(BASENAME)_$(ARCH).changes \
	libapache2-mod-php52_$(VERSION)_$(ARCH).deb \
	php52-dbg_$(VERSION)_$(ARCH).deb \
	php52-dev_$(VERSION)_$(ARCH).deb \
	php52-fpm_$(VERSION)_$(ARCH).deb \
	php52-pear_$(VERSION)_all.deb

sign: build /usr/bin/dh_testdir
	if [ -z "$$passphrase" ]; then echo empty passphrase; fi
	echo $$passphrase | (cd $(UNPACKED_SOURCE); debuild -S -sa)

%.deb: $(PBUILDER_CACHE)/$(DIST)_result/%.deb
	cp "$<" "$@"

%.build: $(PBUILDER_CACHE)/$(DIST)_result/%.build
	cp "$<" "$@"

%.changes: $(PBUILDER_CACHE)/$(DIST)_result/%.changes
	cp "$<" "$@"

$(PBUILDER_CACHE)/$(DIST)_result/$(BASENAME)_$(ARCH).deb \
$(PBUILDER_CACHE)/$(DIST)_result/$(BASENAME)_$(ARCH).changes \
$(PBUILDER_CACHE)/$(DIST)_result/libapache2-mod-php52_$(VERSION)_$(ARCH).deb \
$(PBUILDER_CACHE)/$(DIST)_result/php52-dbg_$(VERSION)_$(ARCH).deb \
$(PBUILDER_CACHE)/$(DIST)_result/php52-dev_$(VERSION)_$(ARCH).deb \
$(PBUILDER_CACHE)/$(DIST)_result/php52-fpm_$(VERSION)_$(ARCH).deb \
$(PBUILDER_CACHE)/$(DIST)_result/php52-pear_$(VERSION)_all.deb: \
		$(PBUILDER_CACHE)/$(DIST)-base.tgz \
		$(BUILD_AREA)/$(BASENAME).dsc \
		$(BUILD_AREA)/$(BASENAME).tar.gz \
		/usr/bin/dh_testdir
	(cd $(BUILD_AREA); $(PBUILDER_DIST) $(DIST) build $(BASENAME).dsc \
		| sed -e 's_^/bin/sh.*libtool.*--mode=compile.*-o__g' \
		| grep -v "note: expected '.*' but argument is of type '.*")

upload:
	dput ppa:wtanaka/ppa $(BASENAME)_source.changes

clean:
	find . -name "*~" -exec rm \{\} \;
	rm -rf $(BUILD_AREA)
	[ -d .git ] && git gc --aggressive

######################################################################

$(BASENAME).dsc $(BASENAME).tar.gz: $(DEBUILD) \
		$(UNPACKED_SOURCE)/debian \
		/usr/bin/dh_testdir
	(cd $(UNPACKED_SOURCE); $(DEBUILD) -S -us -uc)

$(BUILD_AREA):
	mkdir $(BUILD_AREA)

$(BUILD_AREA)/%: % $(BUILD_AREA)
	cp "$<" "$@"

$(PBUILDER_CACHE)/%-base.tgz: $(PBUILDER_DIST) $(CCACHE) $(PBUILDERRC)
	$(PBUILDER_DIST) $* create
	for i in 0 1 2 3 4 5 6 7 8 9 a b c d e f; do mkdir -p $(CCACHE)/$$i; done
	sudo chown -R 1234.1234 $(CCACHE)
	sudo chmod -R a+rwx $(CCACHE)

$(CCACHE):
	mkdir -p $(CCACHE)
	# Avoid permissions problems due to build being run as uid=1234
	# chmod a+rwx $(CCACHE)

$(PBUILDERRC):
	echo 'CCACHEDIR="$(CCACHE)"' > "$@"
	# Avoid permissions problems due to build being run as uid=1234
	# chmod a+rwx $(CCACHE)

$(PBUILDER_DIST): .apt-get-update-timestamp
	sudo apt-get -y install ubuntu-dev-tools

$(DEBUILD): .apt-get-update-timestamp
	sudo apt-get -y install devscripts

/usr/bin/dh_testdir: .apt-get-update-timestamp
	sudo apt-get -y install debhelper

/usr/sbin/pbuilder: .apt-get-update-timestamp
	sudo apt-get -y install pbuilder

.apt-get-update-timestamp:
	sudo apt-get update
	touch "$@"

#/var/cache/pbuilder/base.tgz: /usr/sbin/pbuilder
#	sudo pbuilder create --distribution trusty --debootstrapopts --variant=buildd
#
#$(BASENAME).dsc: $(UNPACKED_SOURCE)
#	(cd $(UNPACKED_SOURCE); bzr builddeb -S)
#
#$(BASENAME)_source.changes: $(UNPACKED_SOURCE)
#	(cd $(UNPACKED_SOURCE); bzr builddeb -S)
#
