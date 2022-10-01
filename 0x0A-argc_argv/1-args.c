#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	int j = argc;

	for (i = 1; i <= j; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
