#include <stdlib.h>
#include <time.h>
/**
 * main - prints ("if n is negetinive")
 * Return: 0
 */
int main(void)
{
	/* local variable definition */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf(n "is negetive")
	}
	else if (n > 0)
	{
		printf(n "is positive")
	}
	else
	{
		printf(n "is negetive")
	}
	return (0);
}
