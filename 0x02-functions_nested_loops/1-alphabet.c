#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: Always 0 (Success), non-zero (Failed)
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
