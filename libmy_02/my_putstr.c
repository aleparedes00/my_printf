/*
** my_putstr.c for  in /home/ale/week2/jour03/parede_h/my_putstr
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Tue Oct 17 09:45:52 2017 PAREDES Ale
** Last update Thu Oct 26 22:33:09 2017 PAREDES Ale
*/

#include <unistd.h>

int	my_strlen(char *);

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
