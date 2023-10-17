#include "main.h"
/**
 * get_integer - print number
 * @list: list of arguments of numbers
 *
 * Return: returns the length of the string that printed
 */
int get_integer(va_list list)
{
	int number, count;
	int divisor;
	/* handle negative numbers */
	unsigned int p_number;

	number = va_arg(list, int);
	divisor = 1;
	count = 0;

	if (number < 0)
	{
		count += _putchar('-');
		p_number = number * -1;
	}
	else
	{
		p_number = number;
	}
	for (; p_number / divisor > 9;)
		divisor = divisor * 10;


	/* repeatedly divides it by 10 until reach to 0*/
	for (; divisor != 0; )
	{
		count += _putchar('0' + (p_number / divisor));
		p_number = p_number % divisor;
		divisor = divisor / 10;
	}
	return (count);
}
