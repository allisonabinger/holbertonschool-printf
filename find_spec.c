#include  "main.h"
/**
 * find_spec - finds characters that are used as specifiers
 * @format: string, character, or integer passed from _printf to examine
 * @args: variable arguments passed to _printf to determine specification
 * Return: count, which is the number of characters printed,
 * or -1 if there is no character after the %
 */
int find_spec(const char *format, va_list args)
{
	int count = 0;
	int i = 0;

	while(format && format[i])
	{
		if (format[i] == %)
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			if (format[i] == %)
			{
				count += _putchar('%');
			}
			else if (use_func(format[i]) == 0)
			{
				count += _putchar(%);
				count += _putchar(format[i]);
			}
			else
				count += use_func(format[i], args);
		}
		else
			count += _putchar(format[k]);
		i++
	}
	return (count);
}
