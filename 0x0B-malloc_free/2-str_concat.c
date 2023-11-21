#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: Forst string
 * @s2: Second string
 * Return: pointer to a newly allocated space in memory
 * NULL is treated as an empty string
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *mem;
	int lent1;
	int lent2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	lent1 = strlen(s1);
	lent2 = strlen(s2);

	mem = (char *)malloc(lent1 + lent2 + 1);

	if (mem != NULL)
	{
		strcpy(mem, s1);
		strcat(mem, s2);
	}
	return (mem);
}
