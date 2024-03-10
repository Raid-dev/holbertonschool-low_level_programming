#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard
 *
 * Description: Prints the chessboard a
 * @a: The array
 *
 * Return: Nothing.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);

		putchar('\n');
	}
}
