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

char	*get_char(char value)
{
  char	*ret;

  ret = malloc(sizeof(char) * 2);
  if (ret == NULL)
    return (NULL);
  ret[0] = value;
  ret[1] = '\0';
  return (ret);
}
