#include "main.h"

/**
 * _strlen_recursion - recursion
 * @s: string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	else
	{
		return (i);
	}
	_putchar('\n');
}
