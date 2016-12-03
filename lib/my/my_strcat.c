/*
** my_strcat.c for strcat in /Users/acebrianm/EPITECH/PSU_2018_my_ls/lib/my
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Tue Nov 22 18:23:13 2016 cebria_a
** Last update Sat Dec  3 17:34:34 2016 cebria_a
*/

#include <my.h>
#include <mysh.h>
#include <stdlib.h>

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;
  char	*new;

  if ((new = malloc(sizeof(char) * my_strlen(dest) + my_strlen(src) + 2)) == 0)
    print_err("Couldn't allocate memory.\n");
  i = 0;
  j = 0;
  while(dest[i] != 0)
    {
      new[i] = dest[i];
      i++;
    }
  new[i++] = '/';
  while (src[j] != 0)
    {
      new[i] = src[j];
      i++;
      j++;
    }
  new[i] = 0;
  return (new);
}
