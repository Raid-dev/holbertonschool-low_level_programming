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
	char *password[10];
	int i;

	srand(time(0));

	for (i = 0; i < 10; i++)
		password[i] = rand();

	printf("%a\n", password);

	return (0);
}
