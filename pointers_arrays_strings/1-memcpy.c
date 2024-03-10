#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * Description: Copies n bytes from memory area src to memory area dest
 * @n: The integer
 * @src: The char pointer
 * @dest: The char pointer
 *
 * Return: Pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
