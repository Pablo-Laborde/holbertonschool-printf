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
                b->buffer[b->pos] = c;
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
	char *s, *n;

	/* code */
	s = va_arg(ap, char*);
	if (s == NULL)
	{
		n = ("(null)");
		b->buffer[b->pos] = n[0];
		i = 1;
		while (n[i] != '\0')
		{
			while (b->pos < BUFFSIZE)
			{
				b->pos += 1;
				b->buffer[b->pos] = n[i];
				i++;
			}
			if (n[i] != '\0')
			{
				b->length += b->pos;
				write(1, b->buffer, b->pos);
				b->pos = 0;
			}
		}
	}
	else /* (s != NULL && s[0] != '\0') */
	{
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
			{
				b->length += b->pos;
				write(1, b->buffer, b->pos);
				b->pos = 0;
			}
		}
	}
}
