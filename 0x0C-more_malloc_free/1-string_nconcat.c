#include <stdio.h>
#include <stdlib.h>
/**
 * string_ncaoncat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to s2
 */
char *string_concat(char *s1, char *s2, unsigned int n)
{
	char *s;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	

	
	if (n >= len2)
	{
		n = len2;
	}
	
	s = malloc(len + 1 + n + 1;
	if (s == NULL)
	{
		return (NULL);
	}
	
	strcpy(s, s1);
	strncat(s, s2,n)
	
	return (s);
}
		
