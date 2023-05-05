#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @num1: the first number.
 * @num2: the second number.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int num_bits;

	for (num_bits = 0; num1 || num2; num1 >>= 1, num2 >>= 1)
	{
		if ((num1 & 1) != (num2 & 1))
			num_bits++;
	}

	return (num_bits);
}
