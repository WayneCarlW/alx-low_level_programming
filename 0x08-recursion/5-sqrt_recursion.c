#include "main.h"
/**
 * true_sqrt - executes recursively to find the natural root of a number
 *
 * @n: Number to be operated on
 * @i: iterator
 * Return: natural sqrt
 */
int true_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (true_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: The number to be operated on
 * Return: Natural squareroot of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (true_sqrt(n, 0));
}
