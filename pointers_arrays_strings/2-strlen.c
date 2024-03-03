#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: Returns the length of the pointer string s
 * @s: The input pointer
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}

	return (length);
}
