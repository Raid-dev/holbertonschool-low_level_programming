#include "main.h"

/**
 * _strcpy - Entry point
 *
 * Description: Copies the pointer to src to the buffer pointer to dest
 * @dest: The input pointer
 * @src: The input pointer
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i])
		i++;

	for (j = i; j >= 0; j--)
		dest[j] = src[j];

	return (dest);
}
