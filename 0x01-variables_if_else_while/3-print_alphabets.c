#include<stdio.h>

/**
 * main - Prints alphabets in lower case, then uppercase, then a new line
 * only allowed to use putchar (thrice in your code)
 * Both for Loop and while loop
 * Return: Always 0 (Success), non-zero (Failed)
 */ 
/*For Loop*/

int main(void)
{
/*	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
 	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}*/

	char ch = 'a', CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
