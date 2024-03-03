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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
