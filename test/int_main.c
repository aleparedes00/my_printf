#include <stdio.h>
#include "libmy.h"

char    *get_nbr(int n);

int	main()
{
  int	n;
  char	*str;

  n = 0;
  str = get_nbr(n);
  printf("my number is %s\n", str);
  return (0);
}
