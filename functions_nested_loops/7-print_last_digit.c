#include "main.h"

/**
 * print_last_digit - Prints the last digit of the number n
 * @n: The input number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int r = n % 10;

	_putchar(r + '0');

	return (0);
}
