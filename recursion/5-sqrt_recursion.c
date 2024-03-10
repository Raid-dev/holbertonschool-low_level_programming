#include "main.h"

/**
 * root_finder - Checks for root
 *
 * Description: Checks if root is the natural square root of n
 * @root: The integer
 * @n: The integer
 *
 * Return: Root.
 */

int root_finder(int root, int n)
{
	if (root * root == n)
		return (root);
	else if (root == n)
		return (-1);

	return (root_finder(root + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * Description: Returns the natural square root of the number n
 * @n: The number
 *
 * Return: The natural square root if exists, otherwise -1.
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (root_finder(1, n));
}
