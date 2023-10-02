#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 * Return: string int length
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: file name that created
 * @text_content: Text thar write
 * Return: 1 on success 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int nc;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	nc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (nc == -1)
		return (-1);
	if (len)
		bytes = write(nc, text_content, len);
	close(nc);
	return (bytes == len ? 1 : -1);
}
