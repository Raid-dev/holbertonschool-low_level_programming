#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i = 0;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	while (i < strlen(alphabet))
	{
		if (alphabet[i] != "q" && alphabet != "e")
		{
			putchar(alphabet[i]);
		}

		i++;
	}

	printf("\n");

	return (0);
}
