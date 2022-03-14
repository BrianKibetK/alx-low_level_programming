#include<stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 * base 16 numbers (0123456789abcdef)
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	int n;
	char a_f;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (a_f = 'a'; a_f <= 'f'; a_f++)
	{
		putchar(a_f);
	}
	putchar('\n');
	return (0);
}
