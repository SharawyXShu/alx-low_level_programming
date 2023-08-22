#include "main.h"

/**
 * swap_int - swaps the values of two integars using two input parameters
 *
 * @a: input parameters 1
 * @b: input parameters 2
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
