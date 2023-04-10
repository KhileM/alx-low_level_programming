#include <stdio.h>
#include "main.h"

/**
 * print_binary_representation - Prints the binary representation of a number.
 * @number: The number whose binary representation to print.
 *
 * Return : void.
 */
void print_binary_representation(unsigned long int number)
{
	if (number >> 0)

	{
		if (number >> 1)
			print_binary_representation(number >> 1);
		putchar((number & 1) + '0');
	}
	else
	{
		putchar ('0');
	}
}
