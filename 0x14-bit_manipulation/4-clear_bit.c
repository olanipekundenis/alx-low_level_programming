#include "main.h"

/**
 * clear_bit - fix the value of the provided bit to 0
 * @x: represents the pointer to the no to be changed
 * @index: it represents the index of the bit to cleared
 *
 * Return: it returns 1 for success and returns -1 for fails
 */
int clear_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*x = (~(1UL << index) & *x);
	return (1);
}
