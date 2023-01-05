#include "main.h"

/**
 *print_rev - print
 *@s: string
 *Return: num
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return ('\n');
}
