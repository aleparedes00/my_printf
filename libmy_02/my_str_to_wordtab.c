/*
** my_str_to_wordtab.c for  in /home/ale/week3/jour07/parede_h/my_str_to_wordtab
**
** Made by PAREDES Ale
** Login   <parede_h@etna-alternance.net>
**
** Started on  Mon Oct 23 18:28:10 2017 PAREDES Ale
** Last update Wed Oct 25 14:58:31 2017 PAREDES Ale
*/

#include <stdlib.h>

int	count_word(char *str);
char	*my_strdup(char *str);
void    print_array(int nb, char **arg);
int	is_alphanum(char c);
char	*my_strncpy(char *s1, char *s2, int n);
char	*cpy_word(char *str, int *i);
int	my_strlen(char *);

char	**my_str_to_wordtab(char *str)
{
  char	**word_tab;
  int	word;
  int	i;
  int	j;
  int	str_len;

  i = 0;
  str_len = my_strlen(str);
  word = count_word(str);
  word_tab = malloc(sizeof(char *) * (word + 1));
  if (word_tab == NULL)
    return (NULL);
  j = 0;
  while (str[i] != '\0' && i < str_len)
    {
      if (is_alphanum(str[i]) == 1)
	{
	  word_tab[j] = cpy_word(str, &i);
	  j++;
	}
      i++;
    }
  word_tab[j] = NULL;
  return (word_tab);
}

int	count_word(char *str)
{
  int	i;
  int	word;

  i = 0;
  word = 0;
  while (str[i] != '\0')
    {
      if (is_alphanum(str[i]) == 1)
	{
	  while (is_alphanum(str[i]) == 1)
	    i++;
	  word++;
	}
      while (str[i] != '\0' && (is_alphanum(str[i]) == 0))
	i++;
    }
  return (word);
}

char	*cpy_word(char *str, int *i)
{
  char	*start;
  char	*word_tab;
  int	first_position;
  int	last_position;

  first_position = *i;
  start = str + *i;
  while (is_alphanum(str[*i]) == 1)
    (*i)++;
  last_position = *i - 1;
  word_tab = malloc(sizeof(char) * (last_position - first_position + 2));
  if (word_tab == NULL)
    return (NULL);
  word_tab = my_strncpy(word_tab, start, last_position - first_position + 1);
  return (word_tab);
}

int     is_alphanum(char c)
{
  if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||\
      (c >= 'a' && c <= 'z'))
    return (1);
  return (0);
}
