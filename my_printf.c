#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "libmy.h"
#include "my_printf.h"

int	my_printf(char *str, ...)
{
  va_list	a_list;
  int		i;

  va_start(a_list, str);
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '%')
 	{
	  i++;
 	  select_option(str[i], a_list);
	  i++;
 	}
      cpy_buffer(str + i);
      i++;
    }
  va_end (a_list);
  return (0) ;
}
