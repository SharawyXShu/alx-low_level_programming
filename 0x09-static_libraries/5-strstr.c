#include "main.h"

/**
 * *_strstr - locate a supstring
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *test = haystack;
		char *vest = needle;

		while (*test == *vest && *vest != '\0')
		{
			test++;
			vest++;
		}
		if (*vest == '\0')
			return (haystack);
	}
	return ('\0');
}
