#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameter
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/*Declare pointer to the argument*/
	va_list ptr;

	/*Initialize the argument to the list*/
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(ptr, int));
		else if (separator && i == 0)
			printf("%d", va_arg(ptr, int));
		else
			printf("%s%d", separator, va_arg(ptr, int));
	}
	va_end(ptr);
	printf("\n");
}
