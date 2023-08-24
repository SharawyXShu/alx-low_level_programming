#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[1] = "Expect the best. Prepare for the worst. Capitalize";
	char str[2] = "on what comes.\nhello world! hello-world";
	char str[3] = "0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str[1]);
	printf("%s", str[2]);
	printf("%s", str[3]);
	return (0);
}
