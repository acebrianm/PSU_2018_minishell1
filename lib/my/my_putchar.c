/*
** my_putchar.c for orlandobloom in /home/acebrianm/EPITECH/delivery/lib/my
** 
** Made by cebria_a
** Login   <cebria_a@epitech.eu>
** 
** Started on  Mon Oct 17 16:16:23 2016 cebria_a
** Last update Mon Oct 17 16:16:43 2016 cebria_a
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
