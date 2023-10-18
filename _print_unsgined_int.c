#include "main.h"
/**
 * print_unsgined_int - print unsigned int
 * @number: number input
 *
 * Return: return number of byte to be printed
 */
int print_unsgined_int(unsigned int number)
{
	unsigned int temp;
	int divisor = 1;
	int count = 0;

	temp = number;

	if (temp == 0)
	{
		count += _putchar('0');
		return (count);
	}
	for (; temp / divisor > 9;)
	{
		divisor = divisor * 10;
	}
	for (; divisor != 0;)
	{
		count += _putchar('0' + temp / divisor);
		temp  = temp % divisor;
		divisor = divisor / 10;
	}
	return (count);
}
/**
 * _print_unsigned - print unsigned
 * @args: list of args
 * Return: number of int to be printed
 */
int _print_unsigned(va_list args)
{
	unsigned int number;

	number = va_arg(args, unsigned int);

	if (number == 0)
	{
		return (print_unsgined_int(number));
	}
	if (number < 1)
		return (-1);

	return (print_unsgined_int(number));
}

