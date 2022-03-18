#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: number of times character \ should be printed
 * if n<=0 only print \n
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int line = 0;
	int spaces;

	if (n > 0)
	{
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
