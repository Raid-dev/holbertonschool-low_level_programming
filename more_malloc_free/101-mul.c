#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Multiplies two positive numbers
 *
 * Description: Multiplies two arguments of the program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: Multiplication of two numbers.
 */

int main(int ac, char **av)
{
	if (ac != 3 || !isdigt(av[1]) || !isdigit(av[2]))
	{
		printf("Error\n");

		exit(98);
	}

	return (av[1] * av[2]);
}
