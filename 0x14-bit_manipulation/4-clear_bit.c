#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * *num: A pointer to the number of an unsigned long int.
 * @index: The index of the bit to modify.
 *
 * Return: 1(Success) , -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index);
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*num &= ~mask;

	return (1);
}
