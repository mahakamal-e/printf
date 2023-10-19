#include "main.h"
/**
 * _print_char - print character
 * @args: list of arguments
 *
 * Return: return 1 on success
 */
int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * _print_string - print string
 * @args: list of argum
 *
 * Return: count of string
 */
int _print_string(va_list args)
{
	char *str;
	int count;
	int i = 0;
	char _buffer_size[BUFSIZE];

	str = va_arg(args, char *);

	if (!str)
		str = "(null)";
	while (*str)
	{
		_buffer_size[i] = str[i];
		i++;
		count++;
	}
	write(1, _buffer_size, count);

	return (count);
}
/**
 * _print_percent - print the % sign
 * @args: list of arg
 * Return: 1 on success
 */
int _print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
