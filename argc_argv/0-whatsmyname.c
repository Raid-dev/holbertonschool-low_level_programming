#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints program's name
 * @argc: The count
 * @argv: The vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	puts(argv[argc - 1]);

	return (0);
}
