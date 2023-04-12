#include "main.h"

/**
 * get_endianess - checks for endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	if (*c)
	{
		/* little endian */
		return (1);
	}
	else
	{
		/* big endian */
		return (0);
	}
}
