/*
** my_put_nbr.c for  in /home/ale/week2/jour05/parede_h/my_put_nbr
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Fri Oct 20 01:32:30 2017 PAREDES Ale
** Last update Sun Oct 29 19:59:19 2017 PAREDES Ale
*/
#include <unistd.h>
#define IS_NEG(x)	(x < 0 ? 1 : 0)
#define INT_MIN		(-217483648)

int     is_int_min(int n);

static void    my_swap_char(char *a, char *b)
{
  char		c;

  c = *a;
  *a = *b;
  *b = c;
}

void    my_showstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    i++;
  write(1, str, i);
}

void	put_revstr(char *str)
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
  my_showstr(str);
}

void	my_put_nbr(int n)
{
  int	nb2;
  char	tab[11];
  int	i;

  nb2 = n;
  i = 0;
  if (is_int_min(n) == 1)
    return ;
  if (IS_NEG(n) == 1)
    {
      write(1, "-", 1);
      n = n * -1;
    }
  if (n == 0)
    write(1, "0", 1);
  while (n > 0)
    {
      nb2 = n % 10;
      tab[i++] = nb2 + '0';
      n = n / 10;
    }
  tab[i] = '\0';
  put_revstr(tab);
}

int     is_int_min(int n)
{
  if (n == INT_MIN)
    {
      write(1, "-2147483648", 11);
      return (1);
    }
  return (0);
}
