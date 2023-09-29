#include <stdio.h>
#include "main.h"
/**
 * _strstr - Finds the first occurrence of a substring needle
 * in the string haystack; comparing not he terminating bytes
 *
 * @needle: String to be searched
 * @haystack: string used for comparison
 * Return: a pointer to the v=beginning of the located substring of NULL
 * if not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (*haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (*haystack);
		}
		haystack++;
	}
	return (NULL);
}
