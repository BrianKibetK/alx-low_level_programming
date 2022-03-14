#include<stdio.h>

/**
 * main - Prints all combinations of SINGLE-DIGIT numbers
 * description; numbers to be separated by (,) followed by a space
 * numbers should be orinted in ascending order
 * can only use the putchar four times maximum
 * not allowed to use type char
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
