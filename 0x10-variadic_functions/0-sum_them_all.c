#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sum variable arguments
 * @n: the number of arguments
 * @...: the integers to sum
 * Return: the integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int test = 0, i = n;
	va_list vest;

	if (!n)
		return (0);
	va_start(vest, n);
	while (i--)
		test += va_arg(vest, int);
	va_end(vest);
	return (test);
}
