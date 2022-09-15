#include "main.h"
#include <stdio>

/**
 * _isupper - checks for uppercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isupper(int c)
{
	return (c <= 'A' && c >= 'Z');
}
