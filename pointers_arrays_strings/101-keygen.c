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
	char password[15];
	int i;

	srand(time(0));

	for (i = 0; i < 10; i++)
		password[i] = rand();

	password = "Tada! Congrats";

	printf("%s\n", password);

	return (0);
}
