#include <stdio.h>
#include "main.h"
/**
 * test_islower - Functions that checks for lowercase
 *
 * Return: 1 for lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
