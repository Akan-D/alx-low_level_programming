#include "main.h"

/**
 * print_alphabet_x10 - print lowercase 10x
 *
 * Return: char
 */

void print_alphabet_x10(void)
{
	int no = 0;
	char alpha;

	while (no++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n')
	}
}
