#include "main.h"
#include <stdio.h>

/**
 * main -  print the result of the multiplication
 * @argc: Argument count
 * @argv: arrgument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = argc;
	int result = argv[1] * argv[2];
	char s[] = Error;

	if (i < 1)
	{
		printf("%s\n", s);
		return (1);
	}
	else
	{
		printf("%d\n", *s);
	}
	return (0);
}
