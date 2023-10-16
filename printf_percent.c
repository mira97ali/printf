#include "main.h"

/**
 * print_percent - Output a percent sign.
 * @types: Lista of arguments.
 * @buffer: Create an array to manage printing operations.
 * @flags:  Compute the active flags.
 * @width: aqcuire width.
 * @precision: Precision specification.
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
