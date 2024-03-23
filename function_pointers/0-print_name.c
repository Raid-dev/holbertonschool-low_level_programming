#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 *
 * Description: Prints the name by using function pointer f
 * @name: The name to print
 * @f: The function pointer to use
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
