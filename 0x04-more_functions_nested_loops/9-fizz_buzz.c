#include "main.h"

/**
 * main - prints numbers and characters
 * Return: output
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{printf("FizzBuzz ");
			continue;
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			if (i != 100)
				_putchar(' ');
			continue;
		}
		printf("%d ", i);
	}
	_putchar(10);
	return (0);
}
