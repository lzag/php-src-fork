--TEST--
getLen Basic test
--EXTENSIONS--
print_lu
--FILE--
<?php
$printLu = new PrintLu();
$len = $printLu->getLuLen("Hello World");
var_dump($len);
?>
--EXPECT--
int(11)
