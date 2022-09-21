#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - Concatenates two string
 * @dest: First string
 * @src: Second string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	printf("%s%s", dest, src);
	printf("%s", src); 
	return (0);
}
