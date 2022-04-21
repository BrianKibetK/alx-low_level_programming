#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	/*Declare pointer to the argument list*/
	va_list ptr;

	/*Initialize the argument to the list pointer*/
	va_start(ptr, n);

	for (i = 0; i < n; i++)

		/*access current variable and pointing to the next*/
		sum += va_arg(ptr, int);

	/*Ending traversal of argument*/
	va_end(ptr);

	return (sum);
}
