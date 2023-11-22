#include <unistd.h>
/**
 * _putchar - prints a character to stdout
 * @c: character to be prints
 * Return: on success 1
 * on error, -1 set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
