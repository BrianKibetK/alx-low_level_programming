#include "main.h"

/**
 * _isdigit - Check for digit (0 through 9)
 * @c: test character
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
	return(0);
}

