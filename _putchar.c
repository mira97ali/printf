#include "main.h"

/**
 * _putchar - printing character
 * @character: The character to be printed
 * Return: 1, success, -1 error
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
