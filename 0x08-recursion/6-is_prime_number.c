#include "main.h"

/**
 * is_prime_rec - helper funtion
 * @n: input integer
 * @div: input divisor
 *
 * Return: integer
 */
int is_prime_rec(int n, int div)
{
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_rec(n, div + 2));
}
/**
 * is_prime_number - fuction to identify a prime number
 * @n: input integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	return (is_prime_rec(n, 3));
}
