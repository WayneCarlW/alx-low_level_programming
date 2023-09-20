#include <stdio.h>
/**
 * _strncpy - copies n contents of a string to another
 *
 * @dest: DEstination of the copied string
 * @src: Source of the string
 * Return: Destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
