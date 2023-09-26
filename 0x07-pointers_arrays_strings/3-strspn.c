#include <stdio.h>
/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: String that contains the segment to be checked
 * @accept: pointer to the string that is checked with s
 * Return: number of the initial segments which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;

	while (*s == *accept && *s != '\0')
	{
		n++;
		str++;
	}
	return (n);
}
