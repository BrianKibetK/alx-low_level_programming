#include<stdio.h>

/**
 * main - Print all single digits of base 10
 * can only use putchar implying variables assigned in quotes
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
