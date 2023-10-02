#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name that read
 * @letters: bytes num that read
 * Return: num bytes thar readed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int nc;
	ssize_t bytes;
	char buff[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	nc = open(filename, O_RDONLY);
		if (nc == -1)
		return (0);
	bytes = read(nc, &buff[0], letters);
	bytes = write(STDOUT_FILENO, &buff[0], bytes);
	close(nc);
	return (bytes);
}
