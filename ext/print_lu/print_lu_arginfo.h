/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: eb98e962f6cbf1eebcc95d3c005b74d041adc031 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_printLuLu, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, len, IS_LONG, 0, "10")
ZEND_END_ARG_INFO()

#define arginfo_class_PrintLu_printWrap arginfo_printLuLu

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_PrintLu_getLuLen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(printLuLu);
ZEND_METHOD(PrintLu, printWrap);
ZEND_METHOD(PrintLu, getLuLen);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(printLuLu, arginfo_printLuLu)
	ZEND_FE_END
};

static const zend_function_entry class_PrintLu_methods[] = {
	ZEND_ME(PrintLu, printWrap, arginfo_class_PrintLu_printWrap, ZEND_ACC_PUBLIC)
	ZEND_ME(PrintLu, getLuLen, arginfo_class_PrintLu_getLuLen, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_PrintLu(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "PrintLu", class_PrintLu_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, 0);

	return class_entry;
}
