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
