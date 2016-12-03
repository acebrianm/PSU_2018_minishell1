/*
** my_strlen.c for d04 in /home/acebrianm/EPITECH/CPool_Day04
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Thu Oct  6 17:09:02 2016 cebria_a
** Last update Mon Oct 17 16:26:09 2016 cebria_a
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}
