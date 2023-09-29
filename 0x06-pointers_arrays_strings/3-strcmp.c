#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _strcmp - Compares two strings
 *
 * @s1: First string
 * @s2: Second string
 * Return: An integer less than , equal to or greateer than zero depending on the si * milar number of bytes.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*str1 - *str2);
}
