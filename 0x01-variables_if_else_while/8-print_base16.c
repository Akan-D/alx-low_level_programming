#include <stdio.h>

/**
 * main - 8th
 *
 * Return:0
 */

int main(void)
{
	int no;
	char alpha;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
