#include "main.h"

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
	if (s != NULL && s != "")
	{
		b->buffer[b->pos] = s[0];
		i = 1;
		while (s[i] != '\0')
		{
			b->pos += 1;
			if (s[i] == '\')
			{
				i++;
				if (s[i] == 'n')
					b->buffer[b->pos] = '\n';
			}
			else
				b->buffer[b->pos] = s[i];
			i++;
		}
	}
}

/**
* ADD_CHAR - Function
* @b: input
* @ap: input
**/

void ADD_CHAR(buff_t *b, va_list ap)
{
	char c = va_arg(ap, int);

	if (c != NULL)
		b->buffer[0] = &c;
}
