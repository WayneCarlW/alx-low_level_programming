#include <stdio.h>
/**
 * _puts - prints a string to stdout followed by a new line
 *
 * @str: pointer to a character
 * Return: NULL
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar(10);
}
