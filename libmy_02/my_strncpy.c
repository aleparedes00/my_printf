/*
** my_strncpy.c for  in /home/ale/week2/jour04/parede_h/my_strncpy
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Tue Oct 17 23:05:49 2017 PAREDES Ale
** Last update Tue Oct 17 23:20:30 2017 PAREDES Ale
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
