/*
** my_strstr.c for  in /home/ale/week2/jour04/parede_h/my_strstr
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Thu Oct 19 23:46:49 2017 PAREDES Ale
** Last update Sat Oct 21 14:38:34 2017 PAREDES Ale
*/
#include <unistd.h>

int	my_strncmp(char *s1, char *s2, int n);
int	my_strlen(char *str);

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  int	size_to_find;

  i = 0;
  j = 0;
  size_to_find = my_strlen(to_find);
  if (to_find[i] == '\0')
    return (str);
  while (str[i] != '\0')
    {
      if (str[i] == *to_find)
	{
	  j = i;
	  if (my_strncmp(str + i, to_find, size_to_find) == 0)
	    return (str + j);
	}
      i++;
    }
  return (NULL);
}
