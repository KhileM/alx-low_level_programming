#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @num: unsigned long int.
 *
 * Return: none.
 */
void print_binary(unsigned long int num)
{
	if (num >> 0)

	{
		if (num >> 1)
			print_binary(num >> 1);
		putchar((num & 1) + '0');
	}
	else
	{
		putchar ('0');
	}
}
