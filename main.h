#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specf - structure thats used to identify and simplify specifications
 * once identified by other functions
 * @spec: specifier
 * @form: function for specifier
 */

typedef struct specf
{
	char *spec;
	int (*form)(va_list args);
} spec_type;

int _printf(const char *format, ...);
int find_spec(const char *format, va_list args);
int use_spec_struct(char format, va_list args);
int get_char(va_list args);
int get_dec(va_list args);
int get_string(va_list args);
int check_spec(char format);
int _putchar(char c);
int main(void);

#endif
