#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: String to print
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
	printf("\n%s", strrev(s));
}
