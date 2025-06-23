--TEST--
printLulu Basic test
--EXTENSIONS--
print_lu
--FILE--
<?php
printLuLu("Hello, World!");
printLuLu("Hello, World!", 4);
?>
--EXPECT--
=-=-=-=-=-
Hello, World!
=-=-=-=-=-
=-=-
Hello, World!
=-=-
