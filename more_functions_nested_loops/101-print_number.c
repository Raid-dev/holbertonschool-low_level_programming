#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: Prints the integer n
 * @n: The input integer
 */

void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n *= -1;
    }

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    int temp = n;
    int num_digits = 0;

    while (temp != 0)
    {
        temp /= 10;
        num_digits++;
    }

    while (num_digits > 0)
    {
        int divisor = 1;
        for (int i = 1; i < num_digits; i++)
        {
            divisor *= 10;
        }

        int digit = n / divisor;
        _putchar(digit + '0');

        n %= divisor;
        num_digits--;
    }
}
