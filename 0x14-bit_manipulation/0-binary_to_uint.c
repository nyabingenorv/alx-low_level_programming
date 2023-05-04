#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0s and 1s.
 *
 * Return: unsigned int with decimal value of binary, or 0 if error.
 */
unsigned int binary_to_uint(const char *b)
{
	int iter;
	unsigned int nm;

	nm = 0;
	if (!b)
		return (0);
	for (iter = 0; b[iter] != '\0'; iter++)
	{
		if (b[iter] != '0' && b[iter] != '1')
			return (0);
	}
	for (iter = 0; b[iter] != '\0'; iter++)
	{
		nm <<= 1;
		if (b[iter] == '1')
			nm += 1;
	}
	return (nm);
}
