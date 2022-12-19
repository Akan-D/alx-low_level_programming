#include <stdio.h>

/**
 * main - num6
 *
 * Return: 0
 */
int main(void)
{
	int no;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0');
	printf('\n');
	return (0);
}
