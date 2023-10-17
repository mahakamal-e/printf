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
		{"%", _print_percent}, {"i", _print_int},
		{"d", _print_int},
	};
	va_list arguments;
	int i = 0, length = 0;

	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; h_list[i].specifier; i++)
			{
				if (*format == *(h_list[i].specifier))
				{
					length += h_list[i].f(arguments);
					break;
				}
			}
			if (!h_list[i].specifier)
			{
				length += _putchar('%');
				length += _putchar(*format);
			}
			format++;
		}
		else
		{
		length += _putchar(*format);
		format++;
		}
	}
	va_end(arguments);
	return (length);
}
