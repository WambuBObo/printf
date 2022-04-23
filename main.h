#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * struct func_type - type structure
 * @t: pointer to the argument
 * @f: pointer-function associated with the argument
 */
typedef struct func_type
{
	char *t;
	int (*f)(va_list);
} func_t;

int (*caller(const char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list args);
int print_char(va_list args);
int print_pct(va_list args);
int print_dec(va_list args);
int print_bin(va_list args);
int print_int(va_list args);
int print_bnr(va_list args);
int print_unt(va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int print_upx(va_list args);
int print_usr(va_list args);
int print_add(va_list args);
int print_rev(va_list args);
int print_rot(va_list args);
int prinlint(va_list args);
int prinlunt(va_list args);
int prinloct(va_list args);
int prinlhex(va_list args);
int prinlupx(va_list args);
int prinhint(va_list args);
int prinhunt(va_list args);
int prinhoct(va_list args);
int prinhhex(va_list args);
int prinhupx(va_list args);
int prinpint(va_list args);
int prinnoct(va_list args);
int prinnhex(va_list args);
int prinnupx(va_list args);
int prinsint(va_list args);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);
#endif
