#include <stdio.h>
#include "main.h"
/**
 * _strcat - Appends the source string to the destination string
 *
 * @dest: Destination String
 * @src: Source string
 * Return:Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
