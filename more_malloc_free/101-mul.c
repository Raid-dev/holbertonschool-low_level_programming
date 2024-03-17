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
	if (ac != 3 || !isdigit(av[1]) || !isdigit(av[2]))
	{
		printf("Error\n");

		exit(98);
	}

	return (((int *)av)[1] * ((int *)av)[2]);
}
