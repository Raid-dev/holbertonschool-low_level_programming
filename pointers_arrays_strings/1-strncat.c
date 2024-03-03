#include "main.h"

/**
 * _strncat - Entry point
 *
 * Description: Concatenates two pointer strings dest and src but uses at most n bytes from src
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: The input bytes
 *
 * Return: Dest string concatenated with src string's first n bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (src[i])
		i++;

	while (dest[j])
		j++;

	if (n < j)
		j = n;

	for (k = j; k < j + i; k++)
	{
		dest[k] = src[k - j];
	}

	return (dest);
}
