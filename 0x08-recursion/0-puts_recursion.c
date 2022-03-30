#include "main.h"
/**
 * _puts_recursion(char *s) - print a string
 * @s: string
 * Return: null
 * */
void _puts_recursion(char *s) {
	for (*s)
		_putchar(*s);
	_puts_recursion(s + 1);

	else
		_putchar('\n');
}
