#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - assign random number to n and print last digit recorded
 *
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of n is %d and is 0\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
