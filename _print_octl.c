#include "main.h"
/**
 * _print_octal - print octel number
 * @args: list of arguments
 * Return: number of bytes to be printed
 */
int _print_octal(va_list args)
{
	int iterat;
	int length = 0;
	int *list_digits;
	unsigned int number, n;

	/* creat an array to store digits of the number */
	number = va_arg(args, unsigned int);
	n = number;

	while (number / 8 != 0)
	{
		number = number / 8;
		length++;
	}

	length++;

	list_digits = malloc(length * sizeof(int));
	/*for loop to extract each digit from the number*/

	for (iterat = 0 ; iterat < length; iterat++)
	{
		list_digits[iterat] = n % 8;
		n = n / 8;
	}
	/* store in the array in reverse order */
	for (iterat = length - 1; iterat >= 0; iterat--)
	{
		_putchar(list_digits[iterat] + '0');
	}

	free(list_digits);
	return (length);
}
