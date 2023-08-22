#include "main.h"

/**
 **_puts_recursion - a function that fills memory with a constant byte.
 *@s: the address of memory
 *Return: Nothing.
 */

int _puts_recursion(char *s)
{
	int count;

	count = 0;
	while ((s[count]) != '\0')
	{
		count++;
	}
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	return (count);
}
