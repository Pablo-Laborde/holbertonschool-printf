#include "main.h"

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

/**
 * int_to_char- function
 * @num: input
 * @digits: input
 * Return: void
 */
void int_to_char(int num, char *digits)
{
	/* var declaration */
	int i, aux, length;

	/* code */
	length = 0;
	aux = num;
	while (aux > 0)
	{
		aux /= 10;
		length++;
	}
	digits[length] = '\0';
	i = length - 1;
	aux = num;
	if (aux > 0)
		while (aux > 0)
		{
			digits[i] = (aux % 10) + '0';
			aux /= 10;
			i++;
		}
	else
		while (aux < 0)
		{
			digits[i] = (aux % 10) * -1 + '0';
			aux /= 10;
			i++;
		}
}
