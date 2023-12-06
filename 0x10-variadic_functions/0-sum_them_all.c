#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all the arguments
 * @n: number of arguments
 * Return: 0 or sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
