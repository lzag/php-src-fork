/* print_lu extension for PHP */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_print_lu.h"
#include "print_lu_arginfo.h"

/* For compatibility with older PHP versions */
#ifndef ZEND_PARSE_PARAMETERS_NONE
#define ZEND_PARSE_PARAMETERS_NONE() \
	ZEND_PARSE_PARAMETERS_START(0, 0) \
	ZEND_PARSE_PARAMETERS_END()
#endif

PHP_FUNCTION(printLuLu)
{
	zend_long line_len = 10;
	char *var;
	size_t var_len;
	size_t i;

	ZEND_PARSE_PARAMETERS_START(1, 2)
			Z_PARAM_STRING(var, var_len)
			Z_PARAM_OPTIONAL
			Z_PARAM_LONG(line_len)
	ZEND_PARSE_PARAMETERS_END();

	for (i = 0; i < line_len; i++) {
		php_printf("%c", i % 2 == 0 ? '=' : '-');
	}
	php_printf("\n");

	php_printf("%s\n", var);

	for (i = 0; i < line_len; i++) {
			php_printf("%c", i % 2 == 0 ? '=' : '-');
	}
	php_printf("\n");

	RETURN_NULL();
}

PHP_METHOD(PrintLu, printWrap)
{
	zend_long line_len = 10;
	char *var;
	size_t var_len;
	size_t i;

	ZEND_PARSE_PARAMETERS_START(1, 2)
			Z_PARAM_STRING(var, var_len)
			Z_PARAM_OPTIONAL
			Z_PARAM_LONG(line_len)
	ZEND_PARSE_PARAMETERS_END();

	for (i = 0; i < line_len; i++) {
		php_printf("%c", i % 2 == 0 ? '=' : '-');
	}
	php_printf("\n");

	php_printf("%s\n", var);

	for (i = 0; i < line_len; i++) {
			php_printf("%c", i % 2 == 0 ? '=' : '-');
	}
	php_printf("\n");

	RETURN_NULL();
}

PHP_METHOD(PrintLu, getLuLen)
{
	char *var;
	size_t var_len;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STRING(var, var_len)
	ZEND_PARSE_PARAMETERS_END();

	RETURN_LONG(var_len);
}

PHP_MINIT_FUNCTION(print_lu)
{
	zend_class_entry *print_lu_ce = register_class_PrintLu();
}

PHP_RINIT_FUNCTION(print_lu)
{
#if defined(ZTS) && defined(COMPILE_DL_PRINT_LU)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	return SUCCESS;
}

PHP_MINFO_FUNCTION(print_lu)
{
	php_info_print_table_start();
	php_info_print_table_row(2, "print_lu support", "enabled");
	php_info_print_table_end();
}

zend_module_entry print_lu_module_entry = {
	STANDARD_MODULE_HEADER,
	"print_lu",					/* Extension name */
	ext_functions,					/* zend_function_entry */
	PHP_MINIT(print_lu),							/* PHP_MINIT - Module initialization */
	NULL,							/* PHP_MSHUTDOWN - Module shutdown */
	PHP_RINIT(print_lu),			/* PHP_RINIT - Request initialization */
	NULL,							/* PHP_RSHUTDOWN - Request shutdown */
	PHP_MINFO(print_lu),			/* PHP_MINFO - Module info */
	PHP_PRINT_LU_VERSION,		/* Version */
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_PRINT_LU
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(print_lu)
#endif
