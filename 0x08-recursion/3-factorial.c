#include "main.h"

/**
 * factorial - returns factorail of a number
 * @n: value
 * Return: value
 */
int factorial(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0)
		return (1);
	else
		return (i * factorial(i - 1));
}
