#include "main.h"

/**
* ADD_CHAR - Function
* @b: input
* @ap: input
* Return: void
*/
void ADD_CHAR(buff_t *b, va_list ap)
{
	/* var declaration */
	char c;

	/* code */
	c = va_arg(ap, int);
	if (c != '\0')
	{
		b->buffer[b->pos] = c;
		b->pos++;
	}
}

/**
 * ADD_STR- function
 * @b: input
 * @ap: input
 * Return: void
 */
void ADD_STR(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	char *s;

	/* code */
	s = va_arg(ap, char*);
	if (s == NULL)
		s = ("(null)");

	b->buffer[b->pos] = s[0];
	i = 1;
	while (s[i] != '\0')
	{
		while (b->pos < BUFFSIZE)
		{
			b->pos += 1;
			b->buffer[b->pos] = s[i];
			i++;
		}
		if (s[i] != '\0')
			buff_ctrl(b);
	}
}
