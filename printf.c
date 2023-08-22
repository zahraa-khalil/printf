#include "main.h"

/**
 *_printf - function that produces output according to a format.
 *@format: the format string
 *Return: number of characters printed (excluding the null)
 */

int _printf(const char *format, ...)
{
	/*list of variadic func arguments[args] */
	va_list args;
	int counter, first_percent;

	counter = 0;
	first_percent = 0;
	/*access to variadic function arguments. */
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (first_percent)
			{
				va_arg(args, char *);
			}

			first_percent++;
			switch (*(format + 1))
			{
				case 'd':
					print_number(*args);
					format += 2;
					break;

				case 'i':
					print_number(*args);
					format += 2;
					break;
				default:
					break;
			}

			counter++;
		}

		_putchar(*format);
		counter++;
		format++;
	}

	/*This ends the traversal of the variadic function arguments. */
	va_end(args);

	return (counter);
}
