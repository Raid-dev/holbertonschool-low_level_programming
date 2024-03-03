#include <unistd.h>

/**
 * _putchar - Writes the character c
 *
 * reset_to_98 - Updates the value the pointer int points to 98
 *
 * swap_int - Swaps the values of two integers
 *
 * _strlen - Returns the length of a string
 *
 * _puts - Prints a string to stdout
 *
 * print_rev - Prints a string in reverse
 *
 * rev_string - Reverses a string
 *
 * puts2 - Prints every other character of a string
 *
 * puts_half - Prints half of a string
 *
 * print_array - Prints n elements of an array of integers
 *
 * _strcpy - Copies a string pointed to by src,including the terminating null byte (\0), to a buffer pointed to by dest
 *
 * _atoi - Converts a string to an integer
 *
 * _strcat - Concatenates two strings
 *
 * _strncat - Concatenates two strings but uses at most n bytes from src
 *
 * _strncpy - Copies a string
 *
 * _strcmp - Compares two strings
 *
 * reverse_array - Reverses the content of an array of integers
 *
 * string_toupper - Changes all lowercase letters of a string to uppercase
 *
 * cap_string - Capitalizes all words of a string
 *
 * leet - Encodes a string into 1337
 */

int _putchar(char c);

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *);

char *cap_string(char *);

char *leet(char *);
