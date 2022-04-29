#include "main.h"

/**
 * set_bit - Sets value of a bit to 1 at
 * given index
 * @n: pointer to the bit
 * @index: index to the set value
 *
 * Return: 1 (success), (-1) failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
