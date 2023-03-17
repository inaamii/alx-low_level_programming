#include <stdio.h>
/**
 * main - Entry point
 * program that prints the size of various types
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of an integer is %ld bytes\n ", sizeof(int));
	printf("size of a character is %ld byte\n", sizeof(char));
	printf("size of a float is %ld bytes\n", sizeof(float));
	printf("size of a double is %ld  bytes\n", sizeof(double));
	return (0);
}
