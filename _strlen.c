#include "main.h"

/**
 **_strlen - a function that fills memory with a constant byte.
 *@s: the address of memory
 *Return: size of str.
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while ((s[count]) != '\0')
	{
		count++;
	}

	return (count);
}
