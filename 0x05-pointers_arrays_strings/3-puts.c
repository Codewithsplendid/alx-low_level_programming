#include "main.h"

/**
 * _puts - prints a string
 * @words: string to print out
 * Return: words
 */
void _puts(char *str)
{
	char words;

	str = &words;
	_puts(str);
}
