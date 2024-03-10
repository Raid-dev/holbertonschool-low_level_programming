#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of
 * integers
 *
 * Description: Prints the sum of the two diagonals of the square matrix a of
 * size size
 * @a: The matrix
 * @size: The integer
 *
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += *(a + i)[i];
		d2 += *(a + i)[size - i - 1];
	}

	printf("%i, %i", d1, d2);
}
