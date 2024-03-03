#include "main.h"

/**
 * _strcmp - Entry point
 *
 * Description: Compares two pointer strings s1 and s2
 * @s1: The first pointer string
 * @s2: The second pointer string
 *
 * Return: 0 if same
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k;

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (i == j)
	{
		for (k = 0; k < i; k++)
		{
			if (s1[k] != s2[k])
				return (0);
		}

		return (0);
	}
	else if (i > j)
	{
		return (-(i + 3));
	}
	else
	{
		return (j + 3);
	}
}
