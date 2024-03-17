#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * multiply - Multiplies two numbers
 *
 * Description: Handles cases for very big numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: Nothing.
 */

void multiply(char *num1, char *num2)
{
	int i, j;
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = (int *)calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}
	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;
	while (i < len1 + len2 - 1)
	{
		printf("%d", result[i]);
		i++;
	}
	if (i == len1 + len2)
		printf("0\n");
	else
	{
		while (i < len1 + len2)
		{
			printf("%d", result[i]);
			i++;
		}
		free(result);
	}

	free(result);
}

/**
 * main - Multiplies two positive numbers
 *
 * Description: Multiplies two arguments of the program
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Multiplication of two numbers.
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	multiply(argv[1], argv[2]);

	return (0);
}
