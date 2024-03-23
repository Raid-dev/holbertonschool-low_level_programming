#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <unistd.h>

/**
 * _putchar - Writes the character c
 *
 * print_name - Prints a name
 *
 * array_iterator - Executes a function given as a parameter on each element of an array
 *
 * int_index - Searches for an integer
 *
 * op_add - Adds parameters
 *
 * op_sub - Subtracts parameters
 *
 * op_mul - Multiplies parameters
 *
 * op_div - Divides parameters
 *
 * op_mod - Calculates remainder of the division of parameters
 */

int _putchar(char c);

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
