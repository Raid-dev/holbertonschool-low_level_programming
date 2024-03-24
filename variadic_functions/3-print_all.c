#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 *
 * Description: Prints all arguments in the format format
 * @format: The format of arguments
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				continue;
		}

		if (format[i])
			printf(", ");
	}

	va_end(ptr);

	putchar('\n');
}
