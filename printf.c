#include "main.h"

/**
 * _printf- function
 * @format: string input
 * Return: length of string if valid ,else a negative number
 */
int _printf(const char *format, ...)
{
	/* var decalration */
	buff_t b;
	va_list ap;

	/* code */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);
	b.pos = 0;
	b.length = 0;
	load_buffer(&b, format, ap);
	va_end(ap);
	return (b.length);
}
