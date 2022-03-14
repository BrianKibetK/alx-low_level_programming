#include<stdio.h>

/**
 * main -Print all single numbers of base ten staring from 0
 * For loop and while loop
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
