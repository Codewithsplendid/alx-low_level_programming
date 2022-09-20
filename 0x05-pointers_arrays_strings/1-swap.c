#include "main.h"

/**
 * swap_int - Swaps to integers
 * @a: integer to be swaped
 * @b: integer to be swaped
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
