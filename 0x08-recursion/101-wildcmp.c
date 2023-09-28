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
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (s1 != '\0' && wildcmp(s1 + 1, s2)));
	else if (*s1 != *s2)
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		return (1);
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
