#include "main.h"

/**
 * _strncpy - Entry point
 *
 * Description: Concatenates two strings dest and src but uses at most n bytes
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: The input bytes
 *
 * Return: Dest string concatenated with src string's first n bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (src[i])
		i++;

	while (dest[j])
		j++;

	if (n < i)
		i = n;

	for (k = 0; k < i; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
