#include "main.h"

/**
 * prime_checker - Checks if a number is prime or not
 *
 * Description: Checks if the number n is prime by using the integer divider
 * @divider: The integer
 * @n: The number
 *
 * Return: 1 if a number is prime, otherwise 0.
 */

int prime_checker(int divider, int n)
{
	if (n != divider && n % divider == 0)
		return (0);
	else if (divider == n || divider == -1 * n)
		return (1);

	return (prime_checker(divider + 1, n));
}

/**
 * is_prime_number - General checkup process of a number
 *
 * Description: General checkup process of the number n
 * @n: The number
 *
 * Return: Returns value from prime_checker
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == -1)
		return (0);

	return (prime_checker(2, n));
}
