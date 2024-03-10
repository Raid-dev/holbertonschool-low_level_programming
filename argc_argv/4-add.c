#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

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
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");

			return (1);
		}
		else
			sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
