#include "main.h"

/**
 * _puts_recursion - a function that prints a new line
 *
 * @s: the string _putchar - character
 *
 * Return: nothing
*/

void _puts_recursion(char *s)
int _putchar(char c)

{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
