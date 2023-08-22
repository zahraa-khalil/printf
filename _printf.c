#include "main.h"

/**
 *_printf - function that produces output according to a format.
 *@format: the format string
 *Return: number of characters printed (excluding the null)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int counter, num;
	char *str;

	counter = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
				case 'c':
					num = va_arg(args, int);
					_putchar(num);
					break;
				case 's':
					str = va_arg(args, char *);
					_puts_recursion(str);
					break;
					case '%':
					_putchar('%');
					break;
				default:
					break;
			}
			format += 2;
			counter++;
		}
		_putchar(*format);
		counter++;
		format++;
	}
	va_end(args);
	return ((counter == 0) ? : -1 , counter);
}
