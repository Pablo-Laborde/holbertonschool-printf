#include "main.h"

/**
 * REV_STR- function
 * @b: input
 * @ap: input
 */
void REV_STR(buff_t *b, va_list ap)
{
	/* var declaration */
	int i, j;
	char *s;

	/* code */
	s = va_arg(ap, char*);
	if (s == NULL)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
		i++;
	j = 1;
	while (j <= i)
		half_load(b, s[i - j]);
}
