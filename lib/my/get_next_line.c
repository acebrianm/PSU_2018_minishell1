/*
** get_next_line.c for nextl in /Users/acebrianm/EPITECH/CPE_2018_getnextline
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Tue Nov 29 12:48:56 2016 cebria_a
** Last update Sat Dec  3 19:35:28 2016 cebria_a
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char	*resize(char *src, int n, int i)
{
  char	*tmp;

  if ((tmp = malloc(sizeof(char) * n)) == 0)
    return (0);
  while (i < n)
    {
      tmp[i] = src[i];
      i++;
    }
  free(src);
  return (tmp);
}

int		get_char(int fd, char *str, int ind)
{
  static char	buf[READ_SIZE];
  static int	i = 0;
  static int	n = READ_SIZE;

  if (i >= n || i == 0)
    {
      i = 0;
      if ((n = read(fd, buf, READ_SIZE)) < 0 || fd < 0)
        return (0);
    }
  if (n == 0)
    str[ind] = 0;
  else
    str[ind] = buf[i++];
  return (n);
}

char   	*get_next_line(const int fd)
{
  char 	*nxtl;
  int  	i;
  int  	n;
  int	size;

  i = 0;
  size = READ_SIZE + 1;
  if ((nxtl = malloc(sizeof(char) * size)) == 0)
    return (0);
  n = get_char(fd, nxtl, i);
  if (nxtl == 0 || fd < 0 || n == 0)
    return (0);
  while (nxtl[i] != '\n' && nxtl[i] != 0)
    {
      nxtl = resize(nxtl, size + i, 0);
      i++;
      n = get_char(fd, nxtl, i);
    }
  nxtl[i] = 0;
  return (nxtl);
}
