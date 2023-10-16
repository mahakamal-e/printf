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
	};
	va_list arguments;
	int i = 0, j = 0, count = 0;

	va_start(arguments, format);
	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (j = 0; j < (int)(sizeof(h_list) / sizeof(h_list[0])); j++)
			{
				if ((h_list[j].specifier[0] == format[i]) &&
						(h_list[j].specifier[1] == format[i + 1]))
				{
					count += h_list[j].f(arguments);
					i = i + 2;
					break;
				}
			}
		}
		else
		{
		_putchar(*format);
		count++;
		}
		i++;
	}
	va_end(arguments);
	return (count);
}
