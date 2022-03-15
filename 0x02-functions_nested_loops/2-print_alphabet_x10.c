#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times in lowercase
 *
 * Return: void 'using prototype void'
 */
void print_alphabet_x10(void)
{
	int a, a10;

	for (a10 = 0; a10 <= 9; a10++)
	{
		for (a = 97; a <= 122; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
