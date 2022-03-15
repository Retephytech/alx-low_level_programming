#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase
 * 
 * Return: is void 'using prototype'
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
