/*
** function_array_pointer.c for  in /home/ale/printf
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Sun Oct 29 21:05:17 2017 PAREDES Ale
** Last update Mon Nov  6 10:36:24 2017 PAREDES Ale
*/
#include <stdarg.h>
#include "libmy.h"
#include "my_printf.h"

void    get_nbr();
void    get_char();
void	get_str();

static const t_percent_action options[OPTS] = {
  {'c', &get_char},
  {'d', &get_nbr},
  {'s', &get_str},
  {'\0', NULL}
};


void	select_option(char c, va_list a_list)
{
  int	i;

  i = 0;
  while (options[i].c != '\0')
    {
      if (c == options[i].c)
	{
	  options[i].f(va_arg(a_list, void *));
	  return ;
	}
      i++;
    }
  my_putstr("Option not found\n");
  return ;
}
