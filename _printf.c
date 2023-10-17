#include "main.h"
/**
 * _printf - choose the correct func for specifier
 * @format: specifier to handle
 * Return: number of bytes to print
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int length = 0;

	va_start(arguments, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			length += handle_specifier(format, arguments);
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
