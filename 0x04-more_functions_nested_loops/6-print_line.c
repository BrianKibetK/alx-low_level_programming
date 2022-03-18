#include "main.h"

/**
 * print_line - Draw straight line in the terminal
 * @n: length of line
 * Return: Always 0 Success
 */

void print_line(int n)
{
	int line;

	line = 0;
	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
