#include <stdio.h>
#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to
 * by s with the constant byte b.
 *
 * @b: Contant byte
 * @n: Number of memory bytes to be filled
 * @s: Memory area to be filled
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
