#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in a that matches one of the bytes in accept
 * or Null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int test, vest;
	char *p;

	test = 0;
	while (s[test] != '\0')
	{
		vest = 0;
		while (accept[vest] != '\0')
		{
			if (accept[vest] == s[test])
			{
				p = &s[test];
				return (p);
			}
			vest++;
		}
		test++;
	}
	return (0);
}
