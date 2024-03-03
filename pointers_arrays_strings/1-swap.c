#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: Swaps the values of two integer pointers a and b
 * @a: The first input pointer
 * @b: The second input pointer
 */

void swap_int(int *a, int *b)
{
	int *temp;

	*temp = *a;

	*a = *b;

	*b = *temp;
}
