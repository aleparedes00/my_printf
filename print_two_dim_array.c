/*
** print_two_dim_array.c for  in /home/ale/printf
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Sun Oct 29 16:38:23 2017 PAREDES Ale
** Last update Sun Oct 29 16:38:49 2017 PAREDES Ale
*/
#include <unistd.h>
#include "libmy.h"

void    print_array(int nb, char **arg)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (i < nb)
    {
      j = 0;
      while (arg[i][j] != '\0')
	j++;
      write(1, arg[i], j);
      write(1, "\n", 1);
      i++;
    }
}
