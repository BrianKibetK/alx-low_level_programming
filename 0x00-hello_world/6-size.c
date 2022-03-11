#include<stdio.h>

/**
 * main - prints size of every type
 *
 * Return: 0 (Success), non-zero (Failed)
 */
int main(void)
{
	char chartype;
	int int_type;
	long longtype;
	long long longlongtype;
	float float_type;

	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longtype));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongtype));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));
	return (0);
}
