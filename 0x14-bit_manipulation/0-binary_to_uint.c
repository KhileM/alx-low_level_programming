#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit - program that converts a binary number to an unsigned int.
 *
 * @b: binary
 *
 * Return: unsigned int.
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int result = 0;
		int i;

	if (!b)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0') && (b[i]) != '1')
			return (0);

		return ((result << 1) + (b[i] - '0'));
	}

	return (result);
}

