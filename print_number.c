#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 * 
 * return count
 */

int print_number(int n)
{
	unsigned int tens, digit, positive = n, count = 0;
	double t_beg = 1;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
			count++;
		}

		while (t_beg <= positive)
			t_beg *= 10;
		tens = t_beg / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			count++;
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
	return(count);
}
