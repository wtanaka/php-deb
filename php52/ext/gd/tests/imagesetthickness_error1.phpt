--TEST--
Testing imagetruecolortopalette(): wrong types for first parameter
--CREDITS--
Rafael Dohms <rdohms [at] gmail [dot] com>
--SKIPIF--
<?php 
	if (!extension_loaded("gd")) die("skip GD not present");
?>
--FILE--
<?php
$resource = tmpfile();

imagesetthickness('string', 5);
imagesetthickness(array(), 5);
imagesetthickness($resource, 5);
?>
--EXPECTF--
Warning: imagesetthickness(): supplied argument is not a valid Image resource in %s on line %d

Warning: imagesetthickness(): supplied argument is not a valid Image resource in %s on line %d

Warning: imagesetthickness(): supplied resource is not a valid Image resource in %s on line %d