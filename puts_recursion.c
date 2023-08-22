#include "main.h"

/**
 **_puts_recursion - a function that fills memory with a constant byte.
 *@s: the address of memory
 *Return: Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar((*s) + '0');
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
