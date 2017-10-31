/*
** my_strlen.c for  in /home/ale/week2/jour03/parede_h/my_strlen
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Tue Oct 17 09:32:16 2017 PAREDES Ale
** Last update Fri Oct 20 18:57:07 2017 PAREDES Ale
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
