#include "main.h"

/**
 * *_memset - file memory with a constant type
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int test;

	for (test = 0; n > 0; test++, n--)
	{
		s[test] = b;
	}
	return (s);
}
