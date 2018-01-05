/*
** my_put_nbr.c for  in /home/ale/week2/jour05/parede_h/my_put_nbr
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Fri Oct 20 01:32:30 2017 PAREDES Ale
** Last update Tue Oct 31 15:06:27 2017 PAREDES Ale
*/
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "libmy.h"
#include "my_printf.h"
# define IS_NEG(x)	(x < 0 ? 1 : 0)
# define INT_MIN	(-217483648)

static void    my_swap_char(char *a, char *b)
{
  char		c;

  c = *a;
  *a = *b;
  *b = c;
}

void	my_revstr(char *str)
{
  int   size;
  int   i;

  size = 0;
  i = 0;
  while (str[size] != '\0')
    size++;
  size = size - 1;
  while (size > i)
    {
      my_swap_char(&str[i], &str[size]);
      size--;
      i++;
    }
  adding_to_buffer(str);
}
/*add the va args with void * and it should send the good param. Put the func smaller by putting the while in a function... good luck*/
void	get_nbr(int n)
{
  int	nb2;
  char	tab[11];
  int	negative;
  int	i;

  nb2 = n;
  negative = 0;
  i = 0;
  if (n == INT_MIN)
    cpy_buffer("-217483648");
  else if (n == 0)
    cpy_buffer("0");
  if (IS_NEG(n) == 1)
    negative = n = n * -1; //no entiendo esta linea
  while (n > 0)
    {
      nb2 = n % 10;
      tab[i++] = nb2 + '0'; //+ '0'/48 para que nb2 tome el valor ascii.
      n = n / 10;
    } 
  if (negative != 0)
    tab[i++] = '-';
  tab[i] = '\0';
  my_revstr(tab);
}
