#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libmy.h"
#include "my_printf.h"

void			cpy_buffer(char *str)
{
  static char		buffer[8192];
  static int		ib = 0;
  
  if (*str != '\0')
    {
      buffer[ib] = *str;
      buffer[ib+1] = '\0';
      ib++;
    }
  if (*str == '\n')
    {
      write(1, buffer, ib);
      ib = 0;
    }
  if (ib == 8191)
    {
      write(1, buffer, ib);
      ib = 0;
    }
}

void		adding_to_buffer(char *str)
{
  while (*str != '\0')
    {
      cpy_buffer(str);
      str++;
    }
}
