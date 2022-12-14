#include <stdio.h>
/**
 * main - project on size of byte
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int no;
	long int lo;
	long long int loo;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n",  (unsigned long)sizeof(no));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lo));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(loo));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
