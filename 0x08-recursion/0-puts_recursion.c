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
	if (*s == '\0')
		exit(1);
	else
		_putchar(*s);
		_puts_recursion(s + 1);

	_putchar(10);
}
