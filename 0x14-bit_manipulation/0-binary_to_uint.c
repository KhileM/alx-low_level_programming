#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - program that converts a binary string to an unsigned int.
 *
 * @b: A pointer to the `binary string to convert.
 *
 * Return: Converted unsigned int, or if error occurs returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--,  base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
