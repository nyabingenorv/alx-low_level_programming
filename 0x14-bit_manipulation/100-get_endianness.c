#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If little-endian - 1.
 * big-endian - 0.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
