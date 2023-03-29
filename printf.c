#include "main.h"

/**
 * _printf- function
 * @format: string input
 * Return: length of string if valid ,else a negative number
 */
int _printf(const char *format, ...)
{
	/* var decalration */
	int i, length;
	buffer_t b;
	va_list ap;

	/* code */
	if (format == NULL)
		return (-1);
	i = 0;
	length = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		load_buffer(&b, format, &i, ap);
		length += b.pos;
		write(1, &(b.buffer), b.pos + 1);
		b.pos = 0;
	}
	va_end(ap);
	return (length);
}
