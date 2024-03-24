#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Performs simple operations
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
			strcmp(argv[2], "*") != 0 &&
			strcmp(argv[2], "/") != 0 && strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
			atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	fun = get_op_func(argv[2]);

	printf("%d\n", fun(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
