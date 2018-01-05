#ifndef		_MY_PRINTF_H_
# define	_MY_PRINTF_H_
# define	OPTS 4
#include <stdarg.h>
#include <stdlib.h>

typedef struct	s_percent_action
{
  char		c;
  void		(*f)();
} t_percent_action;

void    select_option(char c, va_list a_list);
void	cpy_buffer(char *str);
void	adding_to_buffer(char *str);
#endif
