#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
 * get_char - function to print character if specifier is 'c'
 * @args: variable passed from _printf, should be 'c'
 * Return: 1 to terminate function
 */
int get_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (1);
}
