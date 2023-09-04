#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find lenght of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: int
 * @h: string
 * @av: argument
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, h = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (h = 0; av[i][h] != '\0'; h++, cmpt++)
			s[cmpt] = av[i][h];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
