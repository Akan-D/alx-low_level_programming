#include "main.h"

/**
 * _pow_recursion - more recursion
 * @x: num1
 * @y: num2
 *
 * Return: num
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
