#include "main.h"

/**
 * _isdigit - noo digit
 * @c: string
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
