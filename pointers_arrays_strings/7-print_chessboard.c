#include "main.h"

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
	unsigned int i = 0;

	for (i = 0; i < 8; i++)
	{
		while ((*a)[i] != '\0')
		{
			_putchar((*a)[i]);

			(*a)[i]++;
		}
	}
}
