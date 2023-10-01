#include "main.h"

/**
 * get_bit - gets  a bit at a given index
 * @n: the number to index
 * @index: the bit to git
 * Return: the bit state or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
