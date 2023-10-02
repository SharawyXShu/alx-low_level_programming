#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close nc %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH)

/**
 * main - prog
 * @test: argument coint
 * @vest: argument vector
 * Return: 1 on success 0 on fai
 */

int main(int test, char **vest)
{
	int from_nc = 0, to_nc = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (test != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_nc = open(vest[1], O_RDONLY);
	if (from_nc == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, vest[1]), exit(98);
	to_nc = open(vest[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_nc == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, vest[2]), exit(99);

	while ((b = read(from_nc, buf, READ_BUF_SIZE)) > 0)
		if (write(to_nc, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, vest[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, vest[1]), exit(98);

	from_nc = close(from_nc);
	to_nc = close(to_nc);
	if (from_nc)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_nc), exit(100);
	if (to_nc)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_nc), exit(100);

	return (EXIT_SUCCESS);
}
