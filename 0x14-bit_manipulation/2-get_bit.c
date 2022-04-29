#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	for (index = 0; index <= 32; index++)
	{
		if (index > 32)
			return (-1);

		if ((n & index) == 0)
			return (0);

		return (1);
	{
}
