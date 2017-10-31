/*
** my_strcmp.c for  in /home/ale/week2/jour04/parede_h/my_strcmp
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Tue Oct 17 23:27:54 2017 PAREDES Ale
** Last update Wed Oct 18 00:23:12 2017 PAREDES Ale
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] > s2[i])
	return (1);
      else if (s1[i] < s2[i])
	return (-1);
      i++;
    }
  if (s1[i] == s2[i])
    return(0);
  else if (s1[i] > s2[i])
    return (1);
  return (-1);
}
