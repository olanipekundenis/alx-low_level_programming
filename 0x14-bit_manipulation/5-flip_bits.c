#include "main.h"

/**
 * flip_bits - counts the nos of bits between one no to another
 * @x: this is used to represents the first number in the arrays
 * @y: this is used to represent the second number in the arrays of value
 *
 * Return: it returns the numbers of bits that can be found between values
 */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = x ^ y;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
