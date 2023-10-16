#include "main.h"
/**
 * _print_int - print integer
 * @args: list of arguments
 *
 * Return: length to be printed
 */
int _print_int(va_list args)
{
	int len_number;

	len_number = get_integer(args);
	return (len_number);
}
