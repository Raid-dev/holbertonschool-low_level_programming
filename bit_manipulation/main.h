#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Writes the character c
 * @c: The character to write
 *
 * Return: The character.
 *
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * print_binary - Prints the binary representation of a number
 *
 * get_bit - Returns the value of a bit at a given index
 *
 * set_bit - Sets the value of a bit to 1 at a given index
 *
 * clear_bit - Sets the value of a bit to 0 at a given index
 *
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another
 */

int _putchar(char c);

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int get_bit(unsigned long int n, unsigned int index);

int set_bit(unsigned long int *n, unsigned int index);

int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

int get_endianness(void);

#endif
