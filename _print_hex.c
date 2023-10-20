#include "main.h"
/**
 * _print_hexadecimal - print a decimal number of lowercase
 * @args: list of args
 *
 * Return: number of bytes to printed
 */
int _print_hexadecimal(va_list args)
{
	unsigned int number, t_num;
	int i_;
	int length = 0;
	int *l_list;

	number = va_arg(args, unsigned int);
	t_num = number;
	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	while (number / 16 != 0)
	{
		number = number / 16;
		length++;
	}
	length++;
	l_list = malloc(length * sizeof(int));
	for (i_ = 0; t_num > 0; i_++)
	{
		l_list[i_] = t_num % 16;
		t_num = t_num / 16;
	}
	i_ = length - 1;
	while (i_ >= 0)
	{
		if (l_list[i_] > 9)
		{
			l_list[i_] = l_list[i_] + 39;
		}
		_putchar(l_list[i_] + '0');
		i_--;
	}
	free(l_list);
	return (length);
}
