/*
** my_strcmp.c for d05 in /home/acebrianm/EPITECH/CPool_Day06
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Mon Oct 10 17:21:12 2016 cebria_a
** Last update Mon Dec 19 21:15:46 2016 cebria_a
*/

#include "my.h"

int	my_strcmp(char *fir, char *sec)
{
  int	i;
  int	diff;

  i = 0;
  while (fir[i] == sec[i])
    {
      if (fir[i] == 0)
        return (0);
      i++;
    }
  diff = fir[i] - sec[i];
  return (diff);
}
