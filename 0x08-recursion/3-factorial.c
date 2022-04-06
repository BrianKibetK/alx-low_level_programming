#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to obtain its factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return;
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
