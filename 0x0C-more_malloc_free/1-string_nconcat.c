#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates the first n strings of s2 to s1 in a new
 * memory location
 *
 * @s1: The first string
 * @s2: The second string
 * @n: the number of bytes of s2 to be concatenated to s1
 *
 * Return: pointer to a new memory locatio;
 * NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newmem;
	unsigned int len1;
	unsigned int len2;
	unsigned int lenmem;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	memlen = len1 + (n >= len2 ? len2 : n);

	newmem = malloc(memlen + 1);

	if (newmem == NULL)
	{
		return (NULL);
	}

	strcpy(newmem, s1);
	strncat(newmem, s2, n);

	return (newmem);
}
