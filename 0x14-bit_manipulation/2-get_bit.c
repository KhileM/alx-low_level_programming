#include <stdio.h>
#include "main.h"

/**
 * get_bit -  Return the value of a bit at a given index.
 * @num: The number to retrieve the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	for (i = 0; i <= index; i++)
	{
		if (i == index)
		{
			return ((num >>  i) & 1);
		}
	}

	return (-1);
}
