#include<stdio.h>

/**
 * main - Print alphabet in lower case excluding q and e
 *
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
