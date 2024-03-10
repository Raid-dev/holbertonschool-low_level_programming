#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * is_number - Checks if input n is number
 * @n: The input
 *
 * Return: 1 if is number, 0 otherwise.
 */

int is_number(char *n)
{
	int i = 0;

	while (*(n + i) != '\0')
	{
		if (!isdigit(*(n + i)))
			return (0);
		i++;
	}

	return (1);
}

/**
 * main - Entry point
 *
 * Description: Adds positive numbers
 * @argc: The count
 * @argv: The vector
 *
 * Return: 1 in error case, 0 otherwise.
 */

int main(int argc, char **argv)
{
	int i, sum = 0, c = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_natural(argv[i]))
			break;

		c++;

		sum += atoi(argv[i]);
	}

	if (c == argc - 1)
		printf("%d\n", sum);
	else
		printf("Error\n");

	return (0);
}
