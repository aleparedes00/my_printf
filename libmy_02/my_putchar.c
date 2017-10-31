/*
** my_putchar1.c for  in /home/ale/week2/jour01/parede_h
** 
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
** 
** Started on  Mon Oct 16 10:08:20 2017 PAREDES Ale
** Last update Mon Oct 16 10:28:57 2017 PAREDES Ale
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

