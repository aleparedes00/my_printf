/*
** function_array_pointer.c for  in /home/ale/printf
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Sun Oct 29 21:05:17 2017 PAREDES Ale
** Last update Tue Oct 31 15:14:52 2017 PAREDES Ale
*/
#include <stdarg.h>
#include "libmy.h"
#include "my_printf.h"

char    *get_nbr();
char    *get_char();

static const t_percent_action options[OPTS] = {
  {'c', &get_char},
  {'d', &get_nbr},
  {'\0', NULL}
};


char	*select_option(char c, va_list a_list)
{
  int	i;
  char	*str;

  i = 0;
  while (options[i].c != '\0')
    {
      if (c == options[i].c)
	{
	  str = options[i].f(va_arg(a_list, void *));
	  return (str);
	}
      i++;
    }
  my_putstr("Option not found\n");
  return (NULL);
}
