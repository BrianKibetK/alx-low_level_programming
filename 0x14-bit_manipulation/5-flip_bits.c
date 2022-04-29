#include "main.h"

/**
 * flip_bits - Counts number of bits needed to
 * flip from one number to another
 *
 * @n: Number
 * @m: Second number to flip to
 *
 * Return: Number of bits to flip to get
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
