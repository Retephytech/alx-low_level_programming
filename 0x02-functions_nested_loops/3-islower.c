#include "main.h"
/**
 * _islower - controls if a character is in lowercase
 * @c: character to be verified
 * Return: return 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
