#include "main.h"

/**
 * _isalpha - checker
 * @al: checked
 *
 * Return: 1 or 0
 */

int _isalpha(int al)
{
	if ((al >= 'a' && al <= 'z') ||
			(al >= 'A' && al <= 'Z'))
		return (1);
	else
		return (0);
}
