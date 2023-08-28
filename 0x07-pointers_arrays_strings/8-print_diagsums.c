#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int test, s1 = 0, s2 = 0;

	for (test = 0; test < size; test++)
	{
		s1 += a[test];
		s2 += a[size - test - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
