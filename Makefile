# sudo apt-add-repository ppa:skettler/php
# apt-get source php52
UNPACKED_SOURCE=php52
DIST=trusty
BASENAME=php52_5.2.17~$(DIST)~ppa1

all: pbuilder-create
#	(cd build-area; pbuilder-dist $(DIST) build $(BASENAME).dsc)

/usr/sbin/pbuilder:
	sudo apt-get update -qq
	sudo apt-get install -qq pbuilder

pbuilder-create: /usr/sbin/pbuilder
	sudo pbuilder create --distribution trusty --debootstrapopts --variant=buildd

build-area:
	mkdir build-area

upload:
	dput ppa:wtanaka/ppa $(BASENAME)_source.changes

$(BASENAME).dsc: $(UNPACKED_SOURCE)
	(cd $(UNPACKED_SOURCE); bzr builddeb -S)

$(BASENAME)_source.changes: $(UNPACKED_SOURCE)
	(cd $(UNPACKED_SOURCE); bzr builddeb -S)

