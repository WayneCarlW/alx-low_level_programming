#include "main.h"
/**
 * factorial - Returns the factorial of a number
 *
 * @n: Number to be operated on
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n-1));
}
