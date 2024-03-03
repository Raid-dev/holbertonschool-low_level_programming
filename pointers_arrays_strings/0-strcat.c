#include "main.h"

/**
 * _strcat - Entry point
 *
 * Description: Concatenates two pointer strings dest and src
 * @dest: The destination pointer
 * @src: The source pointer
 *
 * Return: Dest string concatenated with src string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;

	while (src[i])
		i++;

	while (dest[j])
		j++;

	for (k = j; k < j + i; k++)
	{
		dest[k] = src[k - j];
	}

	return (dest);
}
