#include "main.h"

/**
 * load_buffer- function
 * @b: pointer to buff_t
 * @format: string
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
	for (j = *i; j < 10; j++)
	{
		b->buffer[j] = j;
		b->pos += 1;
	}
	/*while ((format[j] != '\0') && (b->pos < BUFFSIZE))
	{
		if (format[j] == '%')
		{
			j++;
			if (format[j] == '%')
				b->buffer[b->pos] = format[j];
			else
			{
				f = get_func(format[j]);
				if (f != NULL)
					(*f)(b, ap);
			}
		}
		else if (format[j] == '\\')
		{
			j++;
			if (format[j] == 'n')
				b->buffer[b->pos] = '\n';
		}
		else
			b->buffer[b->pos] = format[j];
		j++;
		b->pos += 1;
	}*/
	*i = j;
}
