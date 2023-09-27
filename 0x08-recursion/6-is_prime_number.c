#include "main.h"
/**
 * _isy_prime_number - Returns true if n is prime and otherwise false
 *
 * @n: number to be tetsted
 * @div: divisibility checker
 * Return: 1 when n is prime and 0 when n is not prime
 */
int _isy_prime_number(int n, int div)
{
	if n <= 1)
		return (0);
	if (div <= 1)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (_is_prime_number(n, div - 1));

}
/**
 * _is_prime_number - Checks if a number is prime
 *
 * @n: number to be tested
 * Return: 0 When false and 1 when true
 */
int _is_prime_number(int n)
{
	return (_isy_prime_number(n, int(_sqrt_recursion(n)));
}
