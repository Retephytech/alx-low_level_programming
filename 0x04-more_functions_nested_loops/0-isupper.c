#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase 
 * @c: variable
 * Return: Always 0
 */
int _isupper(inr c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
