#include "main.h"

extern int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	
	char str[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
