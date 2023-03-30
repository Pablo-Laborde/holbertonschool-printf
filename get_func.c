#include "main.h"

/**
 * get_func- function
 * @c: input
 * Return: function pointer
 */
void (*get_func(char c))(buff_t*, va_list)
{
	/* var declaration */
	int i;
	flags_t fl[] = {
		{'c', ADD_CHAR},
		{'s', ADD_STR},
		{'i', ADD_INT},
		{'d', ADD_INT},
		{'\0', NULL},
	};

	/* code */
	i = 0;
	while (fl[i].c != '\0')
	{
		if (fl[i].c == c)
			return (fl[i].f);
		i++;
	}
	return (NULL);
}
