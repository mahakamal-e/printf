#include "main.h"
/**
 * _print_binary - get the binary number
 * @args: list of arguments
 *
 * Return: the length of nuber to be printed
 */
int _print_binary(va_list args)
{
	unsigned int number;
	int count = 0;
	char bin[32];
	int iterat = 0;

	number = va_arg(args, unsigned int);

	if (number == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (number > 0)
		{
			bin[iterat] = number % 2;
			number >>= 1;
			iterat++;
		}
		/* loop through the array in reverse order */
		for (iterat = iterat - 1 ; iterat >= 0; iterat--)
		{
			_putchar(bin[iterat] + '0');
			count++;
		}
	}
		return (count);

}
