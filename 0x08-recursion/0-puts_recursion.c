#include "main.h"

/**
 * _puts_recursion - prints string in reverse
 * @s: string to reverse
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion((s + 1));
}
