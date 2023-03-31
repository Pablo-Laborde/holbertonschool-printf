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

/**
 * to_hex- function
 * @b: input
 * @ap: input
 * Return: void
 */
void to_hex(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	unsigned int num, aux;
	char number[8];
	char values[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f'};

	/* code */
	num = va_arg(ap, int);
	if (num == 0)
	{
		b->buffer[b->pos] = '0';
		b->pos++;
		if (b->pos == BUFFSIZE)
			buff_ctrl(b);
	}
	for (i = 7; i >= 0; i--)
	{
		aux = num % 16;
		number[i] = values[aux];
		num /= 16;
	}
	i = 0;
	while (number[i] == '0')
		i++;
	while (i < 8)
	{
		b->buffer[b->pos] = number[i];
		i++;
		b->pos++;
		if (b->pos == BUFFSIZE)
			buff_ctrl(b);
	}
}

/**
 * to_heX- function
 * @b: input
 * @ap: input
 * Return: void
 */
void to_heX(buff_t *b, va_list ap)
{
	/* var declaration */
        int i;
        unsigned int num, aux;
        char number[8];
        char values[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f'};

        /* code */
	num = va_arg(ap, int);
	if (num == 0)
	{
		b->buffer[b->pos] = '0';
		b->pos++;
		if (b->pos == BUFFSIZE)
			buff_ctrl(b);
	}
	for (i = 7; i >= 0; i--)
	{
		aux = num % 16;
		number[i] = values[aux];
	num /= 16;
	}
	i = 0;
	while (number[i] == '0')
		i++;
	while (i < 8)
	{
		b->buffer[b->pos] = number[i];
		i++;
		b->pos++;
		if (b->pos == BUFFSIZE)
			buff_ctrl(b);
	}
}
