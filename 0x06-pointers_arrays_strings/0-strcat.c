#include "main.h"

/**
 * char *_strncat - lastdays
 *@dest:char
 *@src:char
 * Return: char
 */

char *_strncat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
