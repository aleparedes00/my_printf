/*
** my_strncat.c for  in /home/ale/week2/jour04/parede_h/my_strncat
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Wed Oct 18 01:45:39 2017 PAREDES Ale
** Last update Thu Oct 19 22:57:20 2017 PAREDES Ale
*/
char    *my_strncat(char *dest, char *src, int n)
{
  int   i;
  int   j;

  i = 0;
  while (dest[i] != '\0')
    i++;
  j = 0;
  while (j < n && src[j] != '\0')
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return (dest);
}
