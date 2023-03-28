#include "main.h"

/*
 */
int (*get_func(char c))(buff_t*, va_list)
{
	int i = 0;

	flags_t opt[] = {
		{'s', ADD_STR},
		{'\0', NULL},
	};

	while (i != 2)
	{
		if (opt[i].c == c)
			opt[i].f;
		else
			i++;
	}

	return (NULL);
}
