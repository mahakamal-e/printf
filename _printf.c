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
		{"%", _print_percent}
	};
	va_list arguments;
	int num_spec = 2;
	int i = 0, j = 0, count = 0;

	va_start(arguments, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (j = 0; j < sizeof(handlers) / sizeof(h_list[0]); j)
			{
				if ((h_list[j].specifier[0] == format[i]) &&
						(h_list[j].specifier[1] == format[i + 1]))
				{
					count += handlers[h_list].f(arguments);
					i = 1 + 2;
					break;
				}
				continue;
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(arguments);
	return (count);
}
