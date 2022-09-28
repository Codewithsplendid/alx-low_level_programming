#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: A string.
 * Return: 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int len;

	len = strlen(s);
	return;
	_strlen_recursion(s);
}
