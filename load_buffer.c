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
	while ((format[j] != '\0') && (b->pos < BUFFSIZE))
		if (format[j] != '%')
			fast_load(b, format, &j);
		else
		{
			j++;
			if (format[j] != '\0')
			{
				if (format[j] == ' ' || format[j] == '%')
					fast_load(b, format, &j);
				else
				{
					if (format[j] == 'c' /*|| format [j] == 's'*/)
					{
						f = get_func(format[j]);
						(*f)(b, ap);
					}
					else
					{
						b->buffer[b->pos] = '%';
						b->pos++;
						fast_load(b, format, &j);
					}
					j++;
					b->pos++;
				}
			}
		}
	*i = j;
}

/**
 * fast_load- function
 * @b: buffer pointer
 * @format: format
 * @j: int
 * Return: void
 */
void fast_load(buff_t *b, const char *format, int *j)
{
	b->buffer[b->pos] = format[(*j)];
	(*j)++;
	b->pos++;
}
