#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <unistd.h>

/**
 * _putchar - Writes the character c
 * @c: The character to write
 *
 * Return: A character.
 *
 * sum_them_all - Returns the sum of all its parameters
 *
 * print_numbers - Prints numbers
 *
 * print_strings - Prints strings
 *
 * print_all - Prints anything
 */

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
