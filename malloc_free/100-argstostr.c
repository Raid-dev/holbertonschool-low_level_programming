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
	int i, j, arg_len = 0, str_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac + 1; i++)
	{
		if (*av[i] != NULL)
		{
			while (*av[i] != '\0')
				arg_len++;
		}
	}
	str = malloc(arg_len + ac * 2);
	if (str == NULL)
		return (NULL);
	arg_len = 0;

	for (i = 1; i < ac + 1; i++)
	{
		while (str[str_len] != '\0')
			str_len++;

		if (*av[i] != NULL)
		{
			while (*av[i] != '\0')
				arg_len++;
		}

		for (j = str_len; j < str_len + arg_len; j++)
			str[j] = av[j - str_len];

		str[str_len + arg_len] = '\0';
		str[str_len + arg_len + 1] = '\n';

		arg_len = 0;
	}

	return (str);
}
