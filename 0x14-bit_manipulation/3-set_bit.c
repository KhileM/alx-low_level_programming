#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @num: a pointer to the number to modify.
 * @index: the index of the bit to modify.
 *
 * Return: 1(success), -1 if an error occured.
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*num |= mask;

	return (1);
}
