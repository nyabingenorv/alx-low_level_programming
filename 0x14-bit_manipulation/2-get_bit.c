#include "main.h"

/**
 * get_bit - Gets the bit given an index.
 * @n: Bits given.
 * @index: index for checking the bit.
 *
 * Return: -1 for an error ,else value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
