#include<stdio.h>

/**
 * main - Prints the alphabet in lower case
 *
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
