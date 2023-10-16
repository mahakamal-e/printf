#include "main.h"
/**
 * _printf - choose the correct func for specifier
 * @format: specifier to handle
 * Return: number of bytes to print
 */
int _printf(const char *format, ...)
{
	specifier_match h_list[] = {
		{"c", _print_char}, {"s", _print_string},
		{"%", _print_percent},
		{"i", _print_int}, {"d", _print_int},
		{"%", _print_percent}
	};
	va_list arguments;
	int i = 0, length = 0;

	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			/* Loop through struct to find the correct func */
			for (i = 0; h_list[i].specifier; i++)
			{
				if (*format == *(h_list[i].specifier))
				{
					length += h_list[i].f(arguments);
					break;
				}
			}
			format++;
		}
		else
		{
		_putchar(*format);
		length += _putchar(*format);
		format++;
		}
	}
	va_end(arguments);
	return (length);
}
