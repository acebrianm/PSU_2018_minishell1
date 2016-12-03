/*
** my_put_nbr.c for Day03 in /Users/acebrianm/EPITECH/CPool_Day03
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Wed Oct  5 17:42:33 2016 cebria_a
** Last update Tue Nov 29 14:30:30 2016 cebria_a
*/

#include "my.h"

int	recursive_function(int nb, int i)
{
  char	number;
  int	tmp;

  number = '0';
  tmp = 1;
  if (nb == 0 && i == 0)
    my_putchar('0');
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb != 0)
    {
      tmp = nb % 10;
      number = tmp + '0';
      recursive_function(nb / 10, 1);
      my_putchar(number);
    }
  return (0);
}

int	my_put_nbr(int nb)
{
  recursive_function(nb, 0);
  my_putchar('\n');
  return (0);
}
