#include "lists.h"

void f_first(void) __attribute__ ((constructor));

/**
 * f_first - print before the function main
 */

void f_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


