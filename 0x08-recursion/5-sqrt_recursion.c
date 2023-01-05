#include "main.h"

/**
 * _sqrt_recursion - more recursion
 *@n: integer
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int a;
	int b;

	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
		return (_sqrt_recursion(a + 1, b));
	}
	else if (n == 0)
	{
		return (_sqrt_recursion(1, n));
	}
}
