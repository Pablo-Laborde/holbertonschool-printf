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
	int i, aux, aux2, length;

	/* code */
	if (num == 0)
	{
		digits[0] = '0';
		digits[1] = '\0';
	}
	else /* (num != 0) */
	{
		length = 0;
		aux = num;
		while (aux != 0)
		{
			aux /= 10;
			length++;
		}
		digits[length] = '\0';
		i = length - 1;
		aux = num;
		while (aux != 0)
		{
			if (aux > 0)
				aux2 = (aux % 10);
			else
				aux2 = (aux % 10) * -1;
			digits[i] = aux2 + '0';
			aux /= 10;
			i--;
		}
	}
}
