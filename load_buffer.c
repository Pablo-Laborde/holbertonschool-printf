#include "main.h"

/**
 * load_buffer- controls all the functions to load the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @format: the original input
 * @ap: the argument list
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
 * slct_opt- selects the correct function for each placeholder if it exists
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @format: the original input
 * @i: position in format
 * @ap: the argument list
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
 * fast_load- loads a char of a string to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @format: the original input
 * @i: position in format to be copied
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
 * half_load- loads a char to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @c: char to be copied
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
 * buff_ctrl- controls the state of the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * Return: void
 */
void buff_ctrl(buff_t *b)
{
	b->length += b->pos;
	write(1, b->buffer, b->pos);
	b->pos = 0;
}
