#include "variadic_functions.h"

/**
 * print-numbers - prints numbers, followed by a new line.
 * @separator: separate
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		_putchar(va_arg(list, int));
		_putchar(*separator);
	}
	va_end(list);
}
