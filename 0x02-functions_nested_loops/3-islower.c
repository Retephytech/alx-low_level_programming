#include <stdio.h>
#include "main.h"
/**
 * _islower - Functions that checks for lowercase
 *
 * Return: Prototype don't require the return 0 but one can choose to put it
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
