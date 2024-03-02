#include "main.h"
#include <math.h>

/**
 * print_number - Entry point
 *
 * Description: Prints the integer n
 * @n: The input integer
 */

void print_number(int n) {
    if (n == 0) {
        _putchar('0');
        return;
    }

    if (n < 0) {
        _putchar('-');

        n = -n;
    }

    int numDigits = 0;
    int temp = n;

    while (temp > 0)
    {
        temp /= 10;

        numDigits++;
    }

    for (int i = numDigits - 1; i >= 0; i--)
    {
        int digit = (n / pow(10, i)) % 10;

        _putchar(digit + '0');
    }
}
