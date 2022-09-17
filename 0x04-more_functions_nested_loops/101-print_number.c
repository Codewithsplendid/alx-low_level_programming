#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: int
 */
void print_number(int n)
{
	unsigned int n_copy = n;

	if (n < 0 || n == INT_MIN)
	{
		_putchar('-');
		n_copy = -n_copy;
	}
	if (n_copy / 10)
		print_number(n_copy / 10);
	_putchar((n_copy % 10) + '0');
}
