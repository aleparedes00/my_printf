/*
** my_strcat.c for  in /home/ale/week2/jour04/parede_h/my_strcat
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Wed Oct 18 00:43:07 2017 PAREDES Ale
** Last update Wed Oct 18 01:37:07 2017 PAREDES Ale
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  while (dest[i] != '\0')
    i++;
  j = 0;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return (dest);
}
