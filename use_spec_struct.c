#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * use_spec_struct - selects the appropriate function from the specifier passed
 * @format: specifier from _printf
 * @args: argument passed to appropriate function
 * Return: number of characters or null
 */
int use_spec_struct(char format, va_list args)
{
	spec_type spec[] = {
		{"i", get_dec},
		{"d", get_dec},
		{"s", get_string},
		{"c", get_char},
		{NULL, NULL},
	};

	int k = 0;
	int count = 0;

	while (spec[k].spec)
	{
		if (*spec[k].spec == format)
		{
			count = spec[k].f(args);
		}
		k++;
	}
	return (count);
}
