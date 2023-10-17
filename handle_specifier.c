#include "main.h"
/**
 * handle_specifier - handle the specifer to the correct func
 *
 * @specifier: specifier that you have handle
 * @args: list of arguments
 *
 * Return: bytes to return
 */

int handle_specifier(const char *specifier, va_list args)
{
	specifier_match h_list[] = {
		{"c", _print_char},
		{"s", _print_string}, {"%", _print_percent},
		{"i", _print_int}, {"d", _print_int},
		{"b", _print_binary},
		{NULL, NULL}
	};
        int i;
	int count = 0;

	if (specifier == NULL)
	{
		return (-1);
	}
	for (i = 0; h_list[i].specifier; i++)
	{
		if (*specifier == *(h_list[i].specifier))
		{
			count += h_list[i].f(args);
			return (count);
		}
	}
	/* handle unkown specifiers */
	count += _putchar('%');
	count += _putchar(*specifier);
	return (count);
}
