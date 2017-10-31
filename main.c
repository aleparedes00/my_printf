#include "libmy.h"
#include "my_printf.h"
#include <stdio.h>

int	my_printf(char *, ...);

int	main()
{
  char *test = "\0";

  my_strlen(test);

  my_printf("ceci, ce n'est %cas u%c example\n", 'p', 'n');
  return (0);
}
