#include "main.h"
/**
 * get_integer - print number
 * @list: list of args
 *
 * Return: The number from the arguments list
 */
int get_integer(va_list list)
{
	int number, length, num_digits;
	int divisor;
	int temp;

	number = va_arg(list, int);
	temp = number;
	length = 0;
	num_digits = 0;
	divisor = 1;

	if (number < 0)
	{
		length += _putchar('-');
		number = number * -1;
	}

	while (temp != 0)
	{
		temp = temp / 10;
		num_digits++;
	}
	for (; number / divisor > 9;)
		divisor = divisor * 10;
	for (; divisor != 0; )
	{
		length += _putchar('0' + (number / divisor));
		number %= divisor;
		divisor /= 10;
	}
	return (length);
}
