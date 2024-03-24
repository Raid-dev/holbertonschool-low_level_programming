#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Prints the opcodes of its own main function
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
	unsigned char *func_ptr = (unsigned char *)main;
	int i, num_bytes;

	if (argc == 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", func_ptr[i]);
	}

	printf("\n");

	return (0);
}
