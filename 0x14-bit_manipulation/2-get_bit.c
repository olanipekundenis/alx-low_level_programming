#include "main.h"

/**
 * get_bit - output the value of a bit of an index in a decimal
 * @x: this represents the value of no that is meant to be searched
 * @index: this represents the index of the bit that is to be manipulated
 *
 * Return: returns the value of the bit that is eventually manipulated
 */
int get_bit(unsigned long int x, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (x >> index) & 1;

	return (bit_value);
}
