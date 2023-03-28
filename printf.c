#include "main.h"

/**
 * _printf- function
 * @format: string input
 * Return: length of string if valid ,else a negative number
 */
int _printf(const char *format, ...)
{
	/* var decalration */
	buffer_t b;
	va_list ap;

	/* code */
	if (format == NULL)
		return (-1);
	va_start(ap, format);
	load_buffer(&b, format, ap);
	va_end(ap);
	write(1, &(b.buffer), b.pos + 1);
	return (b.pos + 1);
}
