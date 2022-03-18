#include "main.h"

/**
 * print_most_numbers - Print 0-9 but not 2 and 4
 * _putchar should be used twice
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
