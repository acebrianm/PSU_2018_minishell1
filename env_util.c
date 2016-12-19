/*
** utilities.c for util in /home/acebrianm/EPITECH/PSU_2018_minishell1
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Sat Dec  3 15:47:17 2016 cebria_a
** Last update Mon Dec 19 21:11:38 2016 cebria_a
*/

#include <stdlib.h>
#include <mysh.h>
#include <my.h>

char	*my_strcat_env(char *dest, char *src)
{
  int   i;
  int   j;
  char  *new;

  if ((new = malloc(sizeof(char) * my_strlen(dest) + my_strlen(src) + 2)) == 0)
    print_err("Couldn't allocate memory.\n");
  i = 0;
  j = 0;
  while (dest[i] != 0)
    {
      new[i] = dest[i];
      i++;
    }
  new[i++] = '=';
  while (src[j] != 0)
    {
      new[i] = src[j];
      i++;
      j++;
    }
  new[i] = 0;
  return (new);
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

char	**new_env(int i, char **env, char **av)
{
  char	**new;

  new = malloc(sizeof(char *) * (i + 1));
  i = 0;
  while (env[i])
    {
      new[i] = env[i];
      i++;
    }
  new[i] = my_strcat_env(av[1], av[2]);
  new[++i] = 0;
  return (new);
}

char	**set_env(char **env, char *input)
{
  int	i;
  int	n;
  char	**av;

  av = my_str_to_wordtab(input, 1);
  if (av[2] == 0)
    return (env);
  i = 0;
  n = -1;
  while (env[i] != 0 && n < 0)
    {
      if (my_strncmp(env[i], av[1], my_strlen(av[1])) != 0)
        n = i;
      i++;
    }
  if (n == -1)
    return (new_env(i, env, av));
  else
    {
      env[n] = my_strcat_env(av[1], av[2]);
      return (env);
    }
}

char	**unset_env(char **env, char *input)
{
  int	i;
  int	k;
  char	**new;
  char	**av;

  av = my_str_to_wordtab(input, 1);
  if (av[1] == 0)
    return (env);
  i = 0;
  k = 0;
  while (env[i])
    i++;
  new = malloc(sizeof(char *) * (i + 1));
  i = 0;
  while (env[i] != 0)
    {
      if (my_strncmp(env[i], av[1], my_strlen(av[1])) == 0)
        new[k++] = env[i];
      i++;
    }
  new[k] = 0;
  free(env);
  return (new);
}
