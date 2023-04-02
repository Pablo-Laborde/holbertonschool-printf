#include "main.h"

/**
 * _printf- prints the given string, replacing place holders
 * by the given argument
 * @format: the string given as input
 * Return: returns the length of the printed string
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
