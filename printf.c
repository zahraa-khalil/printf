#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: the format string
 * Return: number of characters printed (excluding the null)
 */

int _printf(const char *format, ...)
{
    int counter = 0;
    char *argument;
    /* list of variadic func arguments [args] */
    va_list args;

    /*access to variadic function arguments. */
    va_start(args, format);

    while (*format != '\0')
    {
       /* argument = va_arg(args, char *);*/
       // printf("%s\n", format);
        if (*format == '%')
        {
            argument = va_arg(args, char *);
            _printf(*argument);
            counter++;
        }

        putchar(*format);
        counter++;
        format++;


    }

    /*This ends the traversal of the variadic function arguments. */
    va_end(args);

    return (counter);
}
