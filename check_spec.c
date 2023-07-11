#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_spec - looks for specifiers to be passed to use_spec_struct
 * @format: checks specifiers
 * Return: 1 if a specifier is found, or 0 if not.
 */
int check_spec(char format)
{
	char spec[] = {'d', 'i', 'c', 's'};
	int i = 0;

	while (spec[i])
	{
		if (spec[i] == format)
		{
			return (1);
		}

		i++;
	}
	return (0);
}
