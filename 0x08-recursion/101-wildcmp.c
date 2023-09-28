#include "main.h"
/**
 * wildcmp - compares two strings
 *
 * @s1: First string
 * @s2: Second string
 * Return: 1 when the strings re identical and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
