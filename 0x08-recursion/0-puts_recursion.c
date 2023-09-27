#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: pointer to string characters
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
	}
	_putchar(10);
}
