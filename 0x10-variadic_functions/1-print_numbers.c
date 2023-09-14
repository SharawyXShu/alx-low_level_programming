#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 * @separator: the string separator
 * @n: the number of argument
 * @...: the integers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list test;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(test, n);
	while (i--)
		printf("%d%s", va_arg(test, int),
				i ? (separator ? separator : "") : "\n");
	va_end(test);
}
