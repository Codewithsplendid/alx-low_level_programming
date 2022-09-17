#include "main.h"

/**
 * print_line - prints line
 * @n: number of lines
 * Return: void
 */
void print_line(int n)
{
	int no;

	for (no = 0; no < n; no++)
	{
		_putchar('_');
	}
	_putchar(10);
}
