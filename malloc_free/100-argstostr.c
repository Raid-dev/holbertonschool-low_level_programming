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
	long long int i, j, arg_len = 0, str_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac + 1; i++)
	{
		if ((int *)av[i] != NULL)
		{
			while (av[i][arg_len] != '\0')
				arg_len++;
		}
	}

	str = malloc(arg_len + ac + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac + 1; i++)
	{
		if ((int *)av[i] != NULL)
		{
			for (j = 0; av[i][j] != '\0'; j++, str_len++)
				str[str_len] = av[i][j];
			str[str_len++] = '\n';
		}
	}

	str[str_len] = '\0';

	return (str);
}
