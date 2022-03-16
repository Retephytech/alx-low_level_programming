#include "main.h"
/**
 * _isalpha - show 1 if c otherwise show 0
 * @c: character is to be verified
 * Return: 1 for letters otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
