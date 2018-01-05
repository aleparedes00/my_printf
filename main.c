#include "libmy.h"
#include "my_printf.h"
#include <stdio.h>

int	my_printf(char *, ...);

int	main()
{
  my_printf("print this %s\n", "testing");
  printf("offical printf\n");

  //  my_printf("ceci, ce n'est %cas u%dd example plus %s hola\n",
  // 'p', 153, "something esle");
  return (0);
}
