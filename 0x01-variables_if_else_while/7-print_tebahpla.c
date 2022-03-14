#include<stdio.h>

/**
 * main - print lowercase alphabet in reverse using putchar
 *
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
