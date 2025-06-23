--TEST--
test1() Basic test
--EXTENSIONS--
print_lu
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension print_lu is loaded and working!
NULL
