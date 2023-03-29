#include "main.h"

/**
 * _printf- function
 * @format: string input
 * Return: length of string if valid ,else a negative number
 */
int _printf(const char *format, ...)
{
	/* var decalration */
	int i;
	buff_t b;
	va_list ap;

	/* code */
	if (format == NULL ) /*|| (format[0] == '%' && format[1] == '\0')) */
		return (-1);
	i = 0;
	va_start(ap, format);
	b.pos = 0;
	b.length = 0;
	while (format[i] != '\0')
	{
		load_buffer(&b, format, &i, ap);
		buff_ctrl(&b);
	}
	va_end(ap);
	return (b.length);
}
