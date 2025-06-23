--TEST--
printWrap Basic test
--EXTENSIONS--
print_lu
--FILE--
<?php
$printLu = new PrintLu();
$printLu->printWrap("Hello, World!", 4);
?>
--EXPECT--
=-=-
Hello, World!
=-=-
