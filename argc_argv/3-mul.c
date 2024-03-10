#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints program's name
 * @argc: The count
 * @argv: The vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i = 0, n = 1;

	while (i < argc)
	{
		n *= argv[i];

		i++;
	}

	printf("%d\n", n);

	return (0);
}
