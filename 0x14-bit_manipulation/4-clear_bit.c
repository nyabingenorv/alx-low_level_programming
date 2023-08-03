#include "main.h"

/**
 * clear_bit - Set value of a bit to 0.
 * @n: Pointer to the bit.
 * @index: Index of char to be set at.
 *
 * Return: If error -1.
 * Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

