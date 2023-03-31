#include "main.h"

/**
 * load_buffer- function
 * @b: pointer to buff_t
 * @format: string
 * @ap: va_list
 * Return: void
 */
void load_buffer(buff_t *b, const char *format, va_list ap)
{
	/* var declaration */
	int i;

	/* code */
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			fast_load(b, format, &i);
		else
		{
			i++;
			if (format[i] != '\0')
				slct_opt(b, format, &i, ap);
		}
	}
	buff_ctrl(b);
}

/**
 * slct_opt- function
 * @b: buffer pointer
 * @format: format
 * @i: position in format
 * @ap: va_list
 * Return: void
 */
void slct_opt(buff_t *b, const char *format, int *i, va_list ap)
{
	/* var declaration */
	void (*f)(buff_t*, va_list);

	/* cose */
	if (format[(*i)] == ' ' || format[(*i)] == '%')
		fast_load(b, format, i);
	else
	{
		f = get_func(format[(*i)]);
		if (f != NULL)
		{
			(*f)(b, ap);
			(*i)++;
		}
		else
		{
			half_load(b, '%');
			fast_load(b, format, i);
		}
	}
}

/**
 * fast_load- function
 * @b: buffer pointer
 * @format: format
 * @i: int
 * Return: void
 */
void fast_load(buff_t *b, const char *format, int *i)
{
	b->buffer[b->pos] = format[(*i)];
	(*i)++;
	b->pos++;
	if (b->pos == BUFFSIZE)
		buff_ctrl(b);
}

/**
 * half_load- function
 * @b: buffer pointer
 * @c: char
 * Return: void
 */
void half_load(buff_t *b, const char c)
{
	b->buffer[b->pos] = c;
	b->pos++;
	if (b->pos == BUFFSIZE)
		buff_ctrl(b);
}

/**
 * buff_ctrl- function
 * @b: buffer
 * Return: void
 */
void buff_ctrl(buff_t *b)
{
	b->length += b->pos;
	write(1, b->buffer, b->pos);
	b->pos = 0;
}
