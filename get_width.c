#include "main.h"

/**
 *get_width - gets width from a width specifier
 *@s:format string
 *@handler:struct
 *@list:list to increment
 *Return:string
 */
char *get_width(char *s, han_s *handler, va_list list)
{
	int width = 0;

	if (*s == '*')
	{
		width = va_arg(list, int);
		s++;

