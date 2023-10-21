#include "main.h"
/**
 * _print_hexdecimal - print a decimal number in upper case
 * @args: list of arguments
 *
 * Return: number of bytes to printed
 */
int _print_hexdecimal(va_list args)
{
	unsigned int number, temp_num;
	int iterat;
	int len = 0;
	int *list;

	number = va_arg(args, unsigned int);
	temp_num = number;
	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	while (number / 16 != 0)
	{
		number = number / 16;
		len++;
	}
	len++;
	list = malloc(len * sizeof(int));
	for (iterat = 0; temp_num > 0; iterat++)
	{
		list[iterat] = temp_num % 16;
		temp_num = temp_num / 16;
	}
	iterat = len - 1;
	while (iterat >= 0)
	{
		if (list[iterat] > 9)
		{
			list[iterat] = list[iterat] + 7;
		}
		_putchar(list[iterat] + '0');
		iterat--;
	}
	free(list);
	return (len);
}
