#include "main.h"

/**
 * to_bin- function
 * @b: input
 * @ap: input
 * Return: void
 */
void to_bin(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	unsigned int num;
	char number[32];

	/* code */
	num = va_arg(ap, int);
	if (num == 0)
	{
		b->buffer[b->pos] = '0';
		b->pos++;
		if (b->pos == BUFFSIZE)
			buff_ctrl(b);
	}
	for (i = 31; i >= 0; i--)
	{
		number[i] = (num % 2) + '0';
		num /= 2;
	}
	i = 0;
	while (number[i] != '1')
		i++;
	while (i < 32)
	{
		b->buffer[b->pos] = number[i];
		i++;
		b->pos++;
		if (b->pos == BUFFSIZE)
			buff_ctrl(b);
	}
}

/**
 * to_oct- function
 * @b: input
 * @ap: input
 * Return:
 */
void to_oct(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	unsigned int num;
	char number[11];

	/* code */
	num = va_arg(ap, int);
	if (num == 0)
	{
		b->buffer[b->pos] = '0';
		b->pos++;
		if (b->pos == BUFFSIZE)
			buff_ctrl(b);
	}
	for (i = 10; i >= 0; i--)
	{
		number[i] = (num % 8) + '0';
		num /= 8;
	}
	i = 0;
	while (number[i] == '0')
		i++;
	while (i < 11)
	{
		b->buffer[b->pos] = number[i];
		i++;
		b->pos++;
		if (b->pos == BUFFSIZE)
			buff_ctrl(b);
	}
}
