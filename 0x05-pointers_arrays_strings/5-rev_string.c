#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: the value to print to stdout
 */
void print_rev(char *s)
{
	int rev, len;

	len = strlen(s);

	for (rev = (len - 1); rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
