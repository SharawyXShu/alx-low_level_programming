#include "main.h"

/**
 * _isupper - hecks for uppercase character
 *
 * @c: input for alphabet
 *
 * Return: 1 if its upper , and 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
