#include "main.h"

/**
 *_printf - function that produces output according to a format.
 *@format: the format string
 *Return: number of characters printed (excluding the null)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int counter, num, iter;
	char *str;

	counter = 0, iter = 0;
	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[iter] != '\0')
	{
		if (format[iter] == '%')
		{
			if (format[iter + 1] == 'c')
			{
				num = va_arg(args, int);
				counter += _putchar(num);
			}
			else if (format[iter + 1] == 's')
			{
				str = va_arg(args, char *);
				counter += _puts_recursion(str);
			}
			else if (format[iter + 1] == '%')
				counter += _putchar('%');
			else if ((format[iter + 1] == 'i') || (format[iter + 1] == 'd'))
			{
				num = va_arg(args, int);
				counter += print_number(num);
			}
			iter += 2;
		}
		_putchar(format[iter]);
		counter++;
		iter++;
	}
	va_end(args);
	return ((counter == 0) ? -1 : counter);
}
