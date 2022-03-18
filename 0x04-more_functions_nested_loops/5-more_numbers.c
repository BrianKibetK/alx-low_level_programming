#include "main.h"

/**
 * more_numbers - print numbers 0-14 ten times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, n;

	for (i <= 0; i <= 9; i++)
	{
		for (n = '0'; n <= '14'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
