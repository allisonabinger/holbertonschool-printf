#include "main.h"
/**
 * _printf - prints a string, integer, or characters to standard output
 * @format: string, integer, or character to print
 * Return: integer, numbers of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	count = find_spec(format, args);
	va_end(args);

	return (count);
}
