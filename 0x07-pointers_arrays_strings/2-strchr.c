#include <stdio.h>
/**
 * _strchr - locates a character in a string
 *
 * @s: Pointer to the string to be searched
 * @c: character to be searched
 * Return: a pointer to the first occurence of c or
 * NULL when not available
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (char *s);
		}
		s++;
	}
	return (NULL);
}
