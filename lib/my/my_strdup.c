/*
** my_strdup.c for dup in /Users/acebrianm/EPITECH/CPE_2018_getnextline
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Tue Nov 29 13:10:10 2016 cebria_a
** Last update Tue Nov 29 14:27:03 2016 cebria_a
*/

#include "my.h"
#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*dest;
  int	i;

  i = 0;
  if (!src || *src == 0)
    return (0);
  if ((dest = malloc(my_strlen(src) + 1)) == 0)
    return (0);
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = 0;
  return (dest);
}
