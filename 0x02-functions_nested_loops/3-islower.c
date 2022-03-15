#include "main.h"
/**
 * _islower - Functions that checks for lowercase
 * @c: character to be verified
 * Return: 1 for lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
