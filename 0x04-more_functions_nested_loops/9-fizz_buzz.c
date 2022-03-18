#include "main.h"
#include <stdio.h>

/**
 * main - Fizzbuzz challenge
 * print numbers 0-100,
 * for multiples of 3 print fizz, 5 print buzz
 * for multiples of both 3 and 5 print buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d", i);
		}
		printf(" ");
	}
}
