#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "libmy.h"
#include "my_printf.h"

int	my_printf(char *str, ...)
{
  va_list	a_list;
  int		i;
  char		*dest;
  char		*start;

  va_start(a_list, str);
  i = 0;
  start = str;
  dest = "";
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  dest = read_percent_val(str + i, &start,  a_list, dest);
	  i++;
	}
      i++;
    }
  dest = add_to_string(dest, str + i, start);
  my_putstr(dest);
  free(dest);
  va_end (a_list);
  return (0) ;
}

char		*read_percent_val(char *end, char **start,
				  va_list a_list, char *dest)
{
  char		*percent_val;
  char		c;

  dest = add_to_string(dest, end, *start);
  c = *(end + 1);
  //TODO: call the function to process %
  percent_val = select_option(c, a_list);
  dest = add_value_to_string(dest, percent_val);
  free(percent_val);
  *start = end + 2; //TODO: handle more than one character with %
  return (dest);
}

char	*add_value_to_string(char *dest, char* src)
{
  char	*tmp;

  tmp = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)));
  tmp = my_strcpy(tmp, dest);
  free(dest);
  tmp = my_strcat(tmp, src);
  return (tmp);
}

char	*add_to_string(char *dest, char *end, char *start)
{
  char	*tmp;

  tmp = malloc(sizeof(char) * (my_strlen(dest) + end - start + 1));
  tmp = my_strcpy(tmp, dest);
  if (dest[0])
    free(dest);
  tmp = my_strncat(tmp, start, end - start);
  return (tmp);
}
