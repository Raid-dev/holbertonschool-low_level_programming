#include "main.h"

/**
 * cap_string - Entry point
 *
 * Description: Capitalizes all words of the string s
 * @s: The input string
 *
 * Return: String
 */

char *cap_string(char *s)
{
	int i;
	int new_word = 1;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' || s[i] == '!'
			|| s[i] == '?' || s[i] == '"' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
			new_word = 1;
		else if (new_word && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			new_word = 0;
		}
		else
			new_word = 0;
	}

	return (s);
}
