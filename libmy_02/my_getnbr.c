/*
** my_getnbr.c for  in /home/ale/week2/jour05/parede_h/my_getnbr
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Fri Oct 20 14:59:45 2017 PAREDES Ale
** Last update Sat Oct 21 15:17:47 2017 PAREDES Ale
*/

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;
  int	moins;

  i = 0;
  nbr = 0;
  moins = 0;
  while ((str[i] >= '0' && str[i] <= '9') ||
	 ((str[i] == '-' || str[i] == '+') && nbr == 0))
    {
      while (str[i] == '-' || str[i] == '+')
	{
	  if (str[i] == '-')
	    moins++;
	  i++;
	}
      nbr = nbr * 10;
      nbr = nbr + (str[i] - 48);
      i++;
    }
  if ((moins & 1) == 1)
    nbr = -nbr;
  return (nbr);
}
