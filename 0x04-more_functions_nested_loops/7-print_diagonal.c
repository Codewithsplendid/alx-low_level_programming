#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of lines
 * Return: void
 */
void print_diagonal(int n)
{
	int no, no_s;

	if (n <= 0)
		_putchar(10);
	for (no = 1; no <= n; no++)
	{
		for (no_s = 0; no_s < no - 1; no_s++)
			_putchar(' ');
		_putchar('\\');
		_putchar(10);
	}
}
