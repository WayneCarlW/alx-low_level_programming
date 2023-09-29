#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies n contents of a string to another
 *
 * @dest: DEstination of the copied string
 * @src: Source of the string
 * Return: Destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
