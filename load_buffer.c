#include "main.h"

/**
 * load_buffer- function
 * @b: pointer to buff_t
 * @format: string
 * @i: position in format
 * @ap: va_list
 * Return: void
 */
void load_buffer(buff_t *b, const char *format, int *i, va_list ap)
{
	/* var declaration */
	int j;
	void (*f)(buff_t*, va_list);

	/* code */
	j = *i;
	while ((format[j] != '\0')) /* && (b->pos < BUFFSIZE)) */
	{
		if (format[j] == '%')
		{
			if (format[j + 1] == '\0')
				j++;
			else
			{
				f = get_func(format[j + 1]);
				if (f != NULL)
				{
					(*f)(b, ap);
					j++;
				}
				else
				{
					b->buffer[b->pos] = format[j];
					j++;
					b->pos += 1;
					b->buffer[b->pos] = format[j];
				}
			j++;
			b->pos += 1;
			}
		}
		else
		{
			b->buffer[b->pos] = format[j];
			j++;
			b->pos += 1;
		}
	}
	*i = j;
}
