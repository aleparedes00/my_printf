#ifndef		_PRINTF_H_
# define	_PRINTF_H_
# define	OPTS 3
#include <stdarg.h>
#include <stdlib.h>

typedef struct	s_percent_action
{
  char		c;
  char		*(*f)();
} t_percent_action;

char    *read_percent_val(char *end, char **start, va_list a_list, char *dest);
char    *add_to_string(char *dest, char *end, char *start);
char    *add_value_to_string(char *dest, char *src);

#endif
