#include "main.h"
/**
 * _printf - choose the correct func for specifier
 * @format: specifier to handle
 * Return: number of bytes to print
 */
int _printf(const char *format, ...)
{
	specifier_match handlers[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent}
	};
	va_list arguments;
	int num_spec = 2;
	int i = 0;
	int count = 0;

	va_start(arguments, format);

	while (format[i] != '\0')
	{
		while (num_spec >= 0)
		{
			if ((handlers[num_spec].specifier[i] == format[i]) && (handlers[num_spec].specifier[1] == format[i + 1]))
			{
				count = count + handlers[num_spec].f(arguments);
				i = 1 + 2;
			}
			num_spec--;
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(arguments);
	return (count);
}
