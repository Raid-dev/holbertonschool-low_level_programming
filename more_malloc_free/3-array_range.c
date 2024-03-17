#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *
 * Description: Creates an array of integers which contains all the values
 * from min to max
 * @min: The minimum value to be included
 * @max: The maximum value to be included
 *
 * Return: NULL if min value is greater than max value or on failure, a pointer
 * to the newly created array otherwise.
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		arr[i] = i + min;

	return (arr);
}
