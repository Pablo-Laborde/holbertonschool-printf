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
	i = 0;
	s = va_arg(ap, char*);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		fast_load(b, s, &i);
		if (b->pos == BUFFSIZE)
			buff_ctrl(b);
	}
}

/**
 * ADD_INT- function
 * @b: input
 * @ap: input
 * Return:void
 */
void ADD_INT(buff_t *b, va_list ap)
{
	/* var declaration */
	int i, num;
	char *digits;

	/* code */
	digits = NULL;
	num = va_arg(ap, int);
	/*transform num*/
	while (digits[i] != '\0')
	{
		fast_load(b, digits, &i);
		if (b->pos == BUFFSIZE)
			buff_ctrl(b);
	}
}
