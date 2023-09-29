#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies n bytes from the memory area src to the dest
 * memory area.
 *
 * @src: Pointer to the first memory area.
 * @dest: Pointer to the destination memory area.
 * @n: Number of bytes to be copied
 * Return: pointer to the destiontion, dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	
	while (n--)
	{
		*dest++ = *src++
	}
	return (dest);
}
