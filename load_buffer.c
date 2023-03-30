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
	/*void (*f)(buff_t*, va_list);*/

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
					if (format[j] == 'c')
						case_c(b, format, &j, ap);
					/*else if (format[j] == 's')*/
					else
					{
						b->buffer[b->pos] = '%';
						b->pos++;
						fast_load(b, format, &j);
					}
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

/**
 * case_c- function
 * @b: i
 * @format: i
 * @j: i
 * @ap: i
 * Return: void
 */
void case_c(buff_t *b, const char *format, int *j, va_list ap)
{
	void (*f)(buff_t*, va_list);

	f = get_func(format[(*j)]);
	(*f)(b, ap);
	(*j)++;
	b->pos++;
}
