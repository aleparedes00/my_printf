/*
** my_swap.c for  in /home/ale/week2/jour03/parede_h/my_swap
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Tue Oct 17 10:22:42 2017 PAREDES Ale
** Last update Mon Oct 23 11:04:47 2017 PAREDES Ale
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
