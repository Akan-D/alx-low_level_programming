#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory
 *
 * @n: goo
 * @src: nn
 * @dest: tt
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i > n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

