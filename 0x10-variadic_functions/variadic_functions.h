#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

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

void print_all(const char * const format, ...);




#endif
