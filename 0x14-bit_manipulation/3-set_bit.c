#include "main.h"

/**
 * set_bit - fix bit at any index to 1
 * @x: represents the pointer of the no to be changed
 * @index: this represents the index of the bit to be fix to 1
 *
 * Return: it returns 1 for success and returns -1 for failure
 */
int set_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*x = ((1UL << index) | *x);
	return (1);
}
