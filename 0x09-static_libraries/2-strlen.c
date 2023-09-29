#include <stdio.h>
#include "main.h"
/**
 * _strlen - Returns the length of a string
 *
 * @s: pointer to the string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	return (lent);
}
