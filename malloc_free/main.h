#include <unistd.h>

/**
 * _putchar - Writes the character c
 *
 * create_array - Creates an array of chars, and initializes it with a specific char
 *
 * _strdup - Returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
 *
 * str_concat - Concatenates two strings
 *
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *
 * free_grid - Frees a 2 dimensional grid previously created by your alloc_grid function
 */

int _putchar(char c);

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);
