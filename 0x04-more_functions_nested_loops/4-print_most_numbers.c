#include "main.h"

/**
 * print_numbers - prints numbers except 2 & 4
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		if (c != '2' && c != '4')
			_putchar(c);
	_putchar('\n');
}
