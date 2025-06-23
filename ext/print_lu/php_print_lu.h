/* print_lu extension for PHP */

#ifndef PHP_PRINT_LU_H
# define PHP_PRINT_LU_H

extern zend_module_entry print_lu_module_entry;
# define phpext_print_lu_ptr &print_lu_module_entry

# define PHP_PRINT_LU_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_PRINT_LU)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_PRINT_LU_H */
