#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet
 * only use _putchar twice
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char alph;

	while (i < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		i++;
		 _putchar('\n');
	}
}
