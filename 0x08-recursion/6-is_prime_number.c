#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - chech if n is a prime number
 * @othern: int
 * @n: int
 * Return: 0 or 1
 */

int check_prime(int n, int othern);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can devide it
 * @n: int
 * @othern: int
 * Return: int
 */

int check_prime(int n, int othern)
{
	if (othern >= n && n > 1)
		return (1);
	else if (n % othern == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othern + 1));
}
