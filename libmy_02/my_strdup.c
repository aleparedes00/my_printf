/*
** my_strdup.c for  in /home/ale/week3/jour07/parede_h/my_strdup
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Mon Oct 23 12:14:58 2017 PAREDES Ale
** Last update Mon Oct 23 23:47:37 2017 PAREDES Ale
*/
#include <stdlib.h>

int	my_strlen(char *);
char	*my_strcpy(char *s1, char *s2);

char	*my_strdup(char *str)
{
  char	*tmp;

  tmp = malloc(sizeof(char) * my_strlen(str) + 1);
  if (tmp == NULL)
    return (NULL);
  my_strcpy(tmp, str);
  return (tmp);
}
