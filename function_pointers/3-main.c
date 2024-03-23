#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Performs simple operations
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0 (Success).
 */

int main(int argc, int *argv[])
{
	if (argc > 4 || argv[2] != '+' || argv[2] != '-' || argv[2] != '*' ||
			argv[2] != '/' || argv[2] != '%' || ((argv[2] == '/'
					|| argv[2] == '%') && argv[3] == 0))
	{
		printf("Error\n");

		if (argc > 4)
			exit(98);

		if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*' ||
				argv[2] != '/' || argv[2] != '%')
			exit(99);

		if ((argv[2] == '/' || argv[2] == '%') && argv[3] == 0)
			exit(100);
	}

	int *fun = get_op_func(argv[2]);

	fun(atoi(argv[1]), atoi(argv[3]));

	return (0);
}
