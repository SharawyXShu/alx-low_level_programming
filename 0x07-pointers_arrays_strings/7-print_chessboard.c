#include "main.h"

/**
 * print_chessboard - print a print_chessboard
 *
 * @a: rows
 *
 */
void print_chessboard(char (*a)[8])
{
	int test, vest;

	for (test = 0; test < 8; test++)
	{
		for (vest = 0; vest < 8; vest++)
		{
			putchar(a[test][vest]);
		}
		putchar('\n');
	}
}
