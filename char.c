/*
** char.c for  in /home/ale/printf
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Sun Oct 29 14:43:25 2017 PAREDES Ale
** Last update Tue Oct 31 14:53:21 2017 PAREDES Ale
*/
#include <stdarg.h>
#include <stdlib.h>
#include "libmy.h"
#include "my_printf.h"

void	get_char(char value)
{
  char	ret[2];

  ret[0] = value;
  ret[1] = '\0';
  adding_to_buffer(ret);
}
