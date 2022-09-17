#include "main.h"

/**
 * print_most_numbers - integers except 2 and 4
 * Return: int
 */
void print_most_numbers(void)
{
	int no;

	for (no = 0; no <= 9; no++)
		if (no != 2 && no != 4)
			_putchar(no + '0');
	_putchar(10);
}
