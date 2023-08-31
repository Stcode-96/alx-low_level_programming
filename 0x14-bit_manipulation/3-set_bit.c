#include "main.h"

/**
 * set_bit - bit is set to 1
 * @n: number selected for change.
 * @index: index bit that should be set to 1.
 *
 * Return: success, faiure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
