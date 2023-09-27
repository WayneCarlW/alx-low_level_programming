#include "main.h"
#include <math.h>
/**
 * _is_prime_number - Returns true if n is prime and otherwise false
 *
 * @n: number to be tetsted
 * @div: divisibility checker
 * Return: 1 when n is prime and 0 when n is not prime
 */
int _is_prime_number(int n, int div)
{
	int init = n / 2;
	
	if (n <= 1)
		return (0);
	return (is_prime_number(n, init));
}
/**
 * _is_prime - Checks if a number is prime
 *
 * @n: number to be tested
 * @init: Checkpoint
 * Return: 0 When false and 1 when true
 */
int _is_prime(int n, int init)
{
	if (init <= 1)
	{
		return(1);
	}
	else if (n % init == 0)
		return (0);
	return (is_prime(n, init - 1));
}
