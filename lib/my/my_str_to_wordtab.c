/*
** my_str_to_wordtab.c for wordtb in /Users/acebrianm/EPITECH/PSU_2018_my_ls_bootstrap/lib/my
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Tue Nov 15 15:10:05 2016 cebria_a
** Last update Mon Dec 19 21:16:50 2016 cebria_a
*/

#include <stdlib.h>
#include "my.h"

int	is_del(char c, int type)
{
  if (c == ' ' && type == 1)
    return (0);
  else if ((c == ':' || c == '=') && type == 2)
    return (0);
  else
    return (1);
}

int	count_letters(char *str, int i, int type)
{
  int	j;

  j = 0;
  while (is_del(str[i], type) == 1 && str[i] != 0)
    {
      j++;
      i++;
    }
  return (j);
}

int	count_words(char *str, int i, int type)
{
  int	words;

  words = 0;
  while (str[i] != 0)
    {
      if (i == 0)
        i++;
      if (is_del(str[i], type) == 0 && is_del(str[i - 1], type) == 1)
        words++;
      if (is_del(str[i], type) == 1 && str[i + 1] == 0)
        words++;
      i++;
    }
  return (words);
}

char	*get_word(char *str, int i, int type)
{
  char	*word;
  int	j;

  word = malloc(sizeof(char) * (count_letters(str, i, type) + 1));
  j = 0;
  while (is_del(str[i], type) == 1 && str[i] != 0)
    {
      word[j] = str[i];
      j++;
      i++;
    }
  word[j] = 0;
  if (j == 0)
    free(word);
  return (word);
}

char	**my_str_to_wordtab(char *str, int type)
{
  char	**tab;
  char	*word;
  int	i;
  int	j;

  tab = malloc(sizeof(char) * count_words(str, 0, type) + 1);
  i = 0;
  j = 0;
  while (str[i] != 0)
    {
      if (is_del(str[i], type) == 1)
        {
          word = get_word(str, i, type);
          tab[j] = word;
          j++;
          i = i + my_strlen(word) - 1;
        }
      i++;
    }
  tab[j] = 0;
  return (tab);
}
