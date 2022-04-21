#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: separation between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ptr;

	va_start(ptr, n);
	
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (!str)
			str = " ";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s", separator, str);
	}
	printf("\n");

	va_end(ptr);
}
