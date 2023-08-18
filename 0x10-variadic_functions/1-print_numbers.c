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
		if (!separator || i == 1)
			printf("%d",va_arg(list, int));
		else
			printf("%s%d",separator, va_arg(list, int));
	}
	va_end(list);
}
