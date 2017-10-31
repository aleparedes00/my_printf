/*
** my_strupcase.c for  in /home/ale/week2/jour02/parede_h/my_strupcase
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Tue Oct 17 03:26:51 2017 PAREDES Ale
** Last update Tue Oct 17 05:55:07 2017 PAREDES Ale
*/
/*void	my_aff_tab(char str[]);
  void	my_putchar(char );*/

char	*my_strupcase(char str[])
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
/*
**int	main(void)
**{
**  char  str[] = "BonJour!";
**
**  my_aff_tab(my_strupcase(str));
**  my_putchar('\n');
**  return (0);
**}
*/
