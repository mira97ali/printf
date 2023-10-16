#include "main.h"

/**
 * print_int - Print integer
 * @types: Lists of arguments
 * @buffer: Create an array to manage printing operations.
 * @flags:  Compute the active flags
 * @width: acquire width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Count the number of characters that have been printed
 */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int b = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(types, long int);
	unsigned long int num;

	n = convert_size_number(n, size);

	if (n == 0)
		buffer[b--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)n;

	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
		is_negative = 1;
	}

	while (num > 0)
	{
		buffer[b--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_number(is_negative, b, buffer, flags, width, precision, size));
}
