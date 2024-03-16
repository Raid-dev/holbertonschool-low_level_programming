#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *
 * Description: Returns a pointer to a 2 dimensional array of integers
 * of width width and height height
 * @width: The width
 * @height: The height
 *
 * Return: NULL if width or height is 0 or negative or on failure, a pointer
 * otherwise.
 */

int **alloc_grid(int width, int height)
{
	int *arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * 8);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if ((int *)arr[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
