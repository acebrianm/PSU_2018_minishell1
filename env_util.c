/*
** utilities.c for util in /home/acebrianm/EPITECH/PSU_2018_minishell1
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Sat Dec  3 15:47:17 2016 cebria_a
** Last update Sat Dec  3 17:26:37 2016 cebria_a
*/

#include <stdlib.h>
#include <my.h>

int	my_strncmp(char *input, char *str, int n)
{
  int   i;

  i = 0;
  while (i < n)
    {
      if (str[i] != input[i])
        return (0);
      i++;
    }
  return (1);
}

void	print_env(char **env)
{
  int	i;

  i = 0;
  while (env[i])
    {
      my_putstr(env[i]);
      my_putchar('\n');
      i++;
    }
  exit(EXIT_SUCCESS);
}
