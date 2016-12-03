/*
** my_putstr.c for d04 in /home/acebrianm/EPITECH/CPool_Day04
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Thu Oct  6 13:28:18 2016 cebria_a
** Last update Tue Nov 29 14:30:49 2016 cebria_a
*/

#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
