#include "main.h"

/**
 * print_last_digit - Print last digit of number
 * @n: integer to print
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (n < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
