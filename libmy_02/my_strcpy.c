/*
** my_strcpy.c for  in /home/ale/week2/jour04/parede_h/my_strcpy
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Tue Oct 17 22:03:05 2017 PAREDES Ale
** Last update Tue Oct 17 22:46:55 2017 PAREDES Ale
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
