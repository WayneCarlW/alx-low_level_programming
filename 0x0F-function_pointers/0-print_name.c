#include "main.h"

/**
 * print_name - prints a name
 * @name: Name to be printed
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}