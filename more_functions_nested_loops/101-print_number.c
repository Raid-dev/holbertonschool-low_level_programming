#include "main.h"
#include <math.h>

/**
 * print_number - Entry point
 *
 * Description: Prints the integer n
 * @n: The input integer
 */

int power(int base, int exp)
{
	int result = 1;

	int i;

	for (i = 0; i < exp; i++)
		result *= base;

	return result;
}

void print_number(int n)
{
    if (n == 0) {
        _putchar('0');
        return;
    }

    if (n < 0) {
        _putchar('-');

        n = -n;
    }

    int numDigits;

    int temp;
    
    temp = n;
    
    numDigits = 0;

    while (temp > 0)
    {
        temp /= 10;

        numDigits++;
    }

    int digit;

    for (i = numDigits - 1; i >= 0; i--)
    {
        digit = (n / power(10, i)) % 10;

        _putchar(digit + '0');
    }
}
