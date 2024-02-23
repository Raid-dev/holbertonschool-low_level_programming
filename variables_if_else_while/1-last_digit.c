#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i last_digit", n, (n % 10));

	if ((n % 10) > 5)
	{
		puts(" and is greater than 5");
	}
	else if ((n%10) == 0)
	{
		puts(" and is 0");
	}
	else
	{
		puts(" and is less than 6 and not 0");
	}

	return (0);
}
