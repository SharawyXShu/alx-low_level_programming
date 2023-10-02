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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to create
 * @text_content: text to write
 * Return: 1 on success 0 on a failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int nc;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	nc = open(filename, O_WRONLY | O_APPEND);
	if (nc == -1)
		return (-1);
	if (len)
		bytes = write(nc, text_content, len);
	close(nc);
	return (bytes == len ? 1 : -1);
}
