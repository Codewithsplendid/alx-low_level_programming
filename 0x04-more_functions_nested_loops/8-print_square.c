#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{_
			putchar('#');
		}
		_putchar(10);
	}
}
