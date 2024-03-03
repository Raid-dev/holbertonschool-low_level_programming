#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Description: Reverses the content of the array of integers a in size of n
 * @a: The input array
 * @n: The number of elements
 */

void reverse_array(int *a, int n)
{
	int temp = *a;

	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = temp[n - i - 1];
	}
}
