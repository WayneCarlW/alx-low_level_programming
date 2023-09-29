#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Locates the first occurrence in the string s of any of the
 * string accept
 * @s: string to be searched
 * @accept: strong used for comparison
 * Return: Pointer to the byte s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *accept = ccpt;
		while (*accept != '\0')
		{			
			if(*s == *accept)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
