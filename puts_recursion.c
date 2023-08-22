#include "main.h"

/**
 **_puts_recursion - a function that fills memory with a constant byte.
 *@s: the address of memory
 *Return: size of str.
 */

int _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		return (0);
	}

	return (1);
}
