#include "main.h"

/**
 * _memset - good
 * @s: ff
 * @n: no
 * @b: be
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
