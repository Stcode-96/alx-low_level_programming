#include "main.h"

/**
 * clear_bit - bit value is set to 0.
 * @n: selected number to change.
 * @index: index of cleared bit.
 *
 * Return: success, failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
