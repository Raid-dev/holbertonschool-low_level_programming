#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program
 *
 * Description: Concatenates all the arguments in av
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: NULL if ac is 0 or av is NULL or on failure, a pointer to
 * a new string otherwise.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, size = 0, arg_len = 0, str_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][arg_len] != '\0')
			arg_len++;
		size += arg_len;
		arg_len = 0;
	}

	str = malloc(size + ac + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][arg_len] != '\0')
			arg_len++;

		for (j = 0; j < arg_len; j++, str_len++)
			str[str_len] = av[i][j];

		str[str_len++] = '\n';

		arg_len = 0;
	}

	str[str_len] = '\0';

	return (str);
}
