#include "main.h"

/**
 * _memset - Entry point
 *
 * Description: Fills the first n bytes of the memory are pointed to by s with
 * the constant byte b
 * @n: The integer
 * @s: The char pointer
 * @b: The char
 *
 * Return: Pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
