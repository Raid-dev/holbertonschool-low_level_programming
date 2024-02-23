#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int i = 0;
	
	for(i = 0; i < strlen(msg); i++)
		putchar(msg[i]);

	return (1);
}
