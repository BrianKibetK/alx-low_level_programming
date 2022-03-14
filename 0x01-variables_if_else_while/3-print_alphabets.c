#include<stdio.h>

/**
 * main - Prints alphabets in lower case, then uppercase, then a new line
 * only allowed to use putchar (thrice in your code)
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
