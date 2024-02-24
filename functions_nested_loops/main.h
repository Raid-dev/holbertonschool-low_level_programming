#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 * print_string - prints the string str to stdout
 * @str: The string to print
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_string(char str, int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
}
