#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



/**
 * struct df - Struct
 *
 * @dt: data type char
 * @f:  function pointer
 */


typedef struct df
{
	char dt;
	void (*f)(va_list);
} dt_func;




#endif
