#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Multiplies two positive numbers
 *
 * Description: Multiplies two arguments of the program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: Multiplication of two numbers.
 */

int main(int argc, char *argv[])
{
	long int num1, num2;
	unsigned int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit (98);
			}
		}
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	printf("%ld\n", num1 * num2);

	return (0);
}
