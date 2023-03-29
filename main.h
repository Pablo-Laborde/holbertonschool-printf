#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

#define BUFFSIZE 1024

/**
 * struct buff- structure
 * @pos: position in the buffer
 * @buffer: buffer
 */
typedef struct buff {
	int pos, length;
	char buffer[BUFFSIZE];
} buff_t;

/**
 * struct flags- structure
 * @c: type of placeholder
 * @f: function pointer
 */
typedef struct flags {
	char c;
	void (*f)(buff_t*, va_list);
} flags_t;

/* printf.c */
int _printf(const char *format, ...);

/* load_buffer.c */
void load_buffer(buff_t *b, const char *format, int *i ,va_list ap);

/* get_func.c */
void (*get_func(char c))(buff_t*, va_list);

/* functions.c */
void ADD_CHAR(buff_t *b, va_list ap);
void ADD_STR(buff_t *b, va_list ap);
void ADD_INT(buff_t *b, va_list ap);

#endif
