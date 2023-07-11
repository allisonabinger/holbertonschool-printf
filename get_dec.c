#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * get_dec - function to print an integer if specifier is 'd'
 * @args: variable passed from _printf, should be 'd'
 * Return: 1 to terminate function
 */
int get_dec(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	int i = 10;

	if (d == INT_MIN)
	{
		_putchar('-'); /**
				 * dividing INT_MIN by 10 would result in overflow, which
				 * integer data type cannot hold the actual value of a variable
				 * INT_MIN is typically -214748364
				 */
		_putchar('2');
		n = n % 2000000000;

		n = -n;
		count += 2;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n
	}
	while (n / i >= 10)
		i = i * 10;

	while (i > 0)
	{
		if (n < 10)
		{
			count += _putchar(n + '0');
			return (count);
		}
		count += _putchar(((n / i) % 10) + '0');
		i = i / 10;
	}
	return (count);
}
