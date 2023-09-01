#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept : bytes
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int test, vest;

	for (test = 0; s[test] != '\0'; test++)
	{
		for (vest = 0; accept[vest] != s[test]; vest++)
		{
			if (accept[vest] == '\0')
				return (test);
		}
	}
	return (test);
}
