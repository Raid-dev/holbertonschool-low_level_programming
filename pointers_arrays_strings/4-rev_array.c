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
	int start = 0;
	int end = n - 1;

	int temp;

	while (start < end)
	{
		temp = a[start];

		a[start] = a[end];

		a[end] = temp;

		start++;

		end--;
	}
}
