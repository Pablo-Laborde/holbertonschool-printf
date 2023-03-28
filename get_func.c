#include "main.h"

/**
 * 
 * 
 * 
 */
int (*get_func(char c))(buff_t*, va_list)
{
	int i = 0;

	buff_t opt[] = {
		{'c', ADD_CHAR},
		{'\0', NULL},
	};

	while (*(opt[i].ops) != *s)
	{
		i++;
	}

	return (ops[i].buffer);
}
