#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer to a string character
 * Return:NULL
 */
void print_rev(char *s)
{
	int i;
	int lent = strlen(s);

	for (i = lent - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar(10);
}
