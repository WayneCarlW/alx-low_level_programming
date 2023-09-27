#include "main.h"
/**
 * _pow_recursion - returns the value os x raised to the power of y
 *
 * @x: First variable
 * @y: exponential variable
 * Return: @x exponentiated to @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x *_pow_recursion(x,y));
	}
}
