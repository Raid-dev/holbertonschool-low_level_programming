#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 *
 * Description: Sets the value of the pointer to to the char s
 * @s: The character
 * @to: The pointer
 *
 * Return: Nothing.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
