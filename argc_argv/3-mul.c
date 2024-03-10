#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Multiplies two numbers
 * @argc: The count
 * @argv: The vector
 *
 * Return: 1 in error case, 0 otherwise.
 */

int main(int argc, char **argv)
{
	if (argc > 2)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
