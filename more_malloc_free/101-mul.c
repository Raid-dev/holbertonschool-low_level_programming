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

int main(int ac, char *av[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	if (ac != 3 || !isdigit(av[1]) || !isdigit(av[2]))
	{
		printf("Error\n");

		exit(98);
	}

	s1 = argv[1], s2 = argv[2];

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;

	result = malloc(sizeof(int) * len);

	if (!result)
		return (NULL);

	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;

		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}

		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}

	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}

	if (!a)
		_putchar('0');

	_putchar('\n');

	free(result);

	return (0);
}
