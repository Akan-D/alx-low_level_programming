#include "main.h"

/**
 * print_line - lines 
 * @n: num
 *
 * Return: 0
 */

int print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
