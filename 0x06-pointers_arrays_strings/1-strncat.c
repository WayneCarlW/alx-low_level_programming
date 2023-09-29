#include <stdio.h>
#include "main.h"
/**
 * _strncat - appends n contents of src to dest
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters in src to be copied
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
