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
 * @length: length
 */
typedef struct buff
{
	int pos, length;
	char buffer[BUFFSIZE];
} buff_t;

/**
 * struct flags- structure
 * @c: type of placeholder
 * @f: function pointer
 */
typedef struct flags
{
	char c;
	void (*f)(buff_t*, va_list);
} flags_t;

/* printf.c */
int _printf(const char *format, ...);

/* load_buffer.c */
void load_buffer(buff_t *b, const char *format, va_list ap);
void slct_opt(buff_t *b, const char *format, int *i, va_list ap);
void fast_load(buff_t *b, const char *format, int *i);
void half_load(buff_t *b, const char c);
void buff_ctrl(buff_t *b);

/* get_func.c */
void (*get_func(char c))(buff_t*, va_list);

/* func0.c */
void ADD_CHAR(buff_t *b, va_list ap);
void ADD_STR(buff_t *b, va_list ap);
void ADD_INT(buff_t *b, va_list ap);
void ADD_UI(buff_t *b, va_list ap);

/* func1.c */
void to_bin(buff_t *b, va_list ap);
void to_oct(buff_t *b, va_list ap);
void to_hex(buff_t *b, va_list ap);
void to_heX(buff_t *b, va_list ap);

/* func2.c */
void ADD_ADDR(buff_t *b, va_list ap);
void ADD_PSTR(buff_t *b, va_list ap);
void REV_STR(buff_t *b, va_list ap);
void ROT_STR(buff_t *b, va_list ap);

/* a_func.c */
void int_to_char(int num, char *digits);
void ui_to_char(unsigned int num, char *digits);
void adr_to_char(unsigned long int num, char *address);

#endif
