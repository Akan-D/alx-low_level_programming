#include "main.h"

/**
 * string_toupper - change low to up
 * @s:strin
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i]  >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}