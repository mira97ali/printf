#include "main.h"

/**
 * printf_char - printing a binary number
 * @args: the arguements 
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_char(va_list args, int printed)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (printed + 1);
}
