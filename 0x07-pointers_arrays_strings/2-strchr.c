#include "main.h"

/**
 * *_strchr - files memory with a constant byte
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int test;

	for (test = 0; s[test] >= '\0' ; test++)
	{
		if (s[test] == c)
		{
			return (s + test);
		}
	}
		return ('\0');
}
