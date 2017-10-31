/*
** my_strncmp.c for  in /home/ale/week2/jour04/parede_h/my_strncmp
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Wed Oct 18 00:28:02 2017 PAREDES Ale
** Last update Wed Oct 18 00:37:21 2017 PAREDES Ale
*/
int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      if (s1[i] > s2[i])
	return (1);
      else if (s1[i] < s2[i])
	return (-1);
      i++;
    }
  return (0);
}
