#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFSIZE 1024


/**
 * struct conv_specifier - to match with the cinversion specifiers
 * @specifier: format passed
 * @f: pointer to function for conversiton spec
 *
 * Description: struct to define the map for format specifiers
 */
typedef struct conv_specifier
{
char *specifier;
int (*f)(va_list);
} specifier_match;

int _putchar(char c);
int _printf(const char *format, ...);
int handle_specifier(const char *specifier, va_list args);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_percent(__attribute__((unused))va_list args);
int _print_int(va_list args);
int get_integer(va_list list);


#endif
