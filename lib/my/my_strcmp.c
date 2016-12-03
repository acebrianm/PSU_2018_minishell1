/*
** my_strcmp.c for d05 in /home/acebrianm/EPITECH/CPool_Day06
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Mon Oct 10 17:21:12 2016 cebria_a
** Last update Tue Nov 29 14:32:54 2016 cebria_a
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	diff;

  i = 0;
  while (s1[i] == s2[i])
    {
      if (s1[i] == 0)
	return (0);
      i++;
    }
  diff = s1[i] - s2[i];
  return (diff);
}
