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
	int i, num_bytes, mask = 0x000000ff;
	int (*memory_checker)(int, char **) = main;
	char opcode;

	if (argc != 2)
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
		opcode = *(char *)memory_checker;

		if (i == num - 1)
			printf("%.2x", (opcode & mask));
		else
			printf("%.2x ", (opcode & mask)), memory_checker++;
	}

	printf("\n");

	return (0);
}
