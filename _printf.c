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
<<<<<<< HEAD
		{"%", _print_percent},
		{"i", _print_int}, {"d", _print_int},
=======
		{"%", _print_percent}
>>>>>>> 5441392fd8a51f8b957a45a884e5e69e81fc09df
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
<<<<<<< HEAD
		_putchar(*format);
		count++;
=======
		length += _putchar(*format);
		format++;
>>>>>>> 5441392fd8a51f8b957a45a884e5e69e81fc09df
		}
	}
	va_end(arguments);
	return (length);
}
