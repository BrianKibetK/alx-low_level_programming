#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Character to be checked
 * Return: 1 if lower or uppercase, 0 otherwise
 */
int _isalpha(int c);
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
