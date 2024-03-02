#include <unistd.h>

/**
 * _putchar - Writes the character c
 *
 * _isupper - Checks for uppercase character
 *
 * _isdigit - Checks for a digit (0 through 9)
 *
 * mul - Multiplies two integers
 *
 * print_numbers - Prints the numbers, from 0 to 9
 *
 * print_most_numbers - Prints the numbers, from 0 to 9 except 2 and 4
 *
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * print_line - Draws a straight line in the terminal
 *
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * print_square - Prints a square
 *
 * print_triangle - Prints a triangle
 *
 * print_number - Prints an integer
 */

int _putchar(char c);

int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

void print_number(int n);
