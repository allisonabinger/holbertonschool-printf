/**
 * get_string - function to print a string if specifier is 's'
 * @args: variable passed from _printf, should be 's'
 * Return: number of characters printed for string, or number of characters
 * in '(NULL)'
 */
int get_string(va_list args)
{
	char *s; /*s is a pointer to the string*/
	int st_char; /*st_char is the number of characters printed*/
	int i;

	s = va_arg(args, char *);
	if (s != NULL)
	{
	st_char = 0;

	for (i = 0; s[i]; i++)
	{
		st_char += _putchar(s[j]);
	}
	return (st_char);
	}
	/* else, if string is null, print (NULL)*/
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');

	return (6);
}
