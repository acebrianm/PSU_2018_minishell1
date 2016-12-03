/*
** mysh.c for shell in /home/acebrianm/EPITECH/PSU_2018_minishell1
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Fri Dec  2 18:44:57 2016 cebria_a
** Last update Sat Dec  3 18:45:16 2016 cebria_a
*/

#include <my.h>
#include <mysh.h>
#include <stdlib.h>
#include <signal.h>

char    **get_env(char **envp, int i)
{
  char  **env;
  int   j;

  while (envp[i] != 0)
    i++;
  if ((env = malloc(sizeof(char *) * i)) == 0)
    print_err("Couldn't allocate memory.\n");
  i = 0;
  while (envp[i] != 0)
    {
      j = 0;
      if ((env[i] = malloc(sizeof(char) * my_strlen(envp[i]) + 1)) == 0)
        print_err("Couldn't allocate memory.\n");
      while (envp[i][j])
	{
	  env[i][j] = envp[i][j];
	  j++;
	}
      env[i][j] = 0;
      i++;
    }
  return (env);
}

void	sig_handler(int signo)
{
  if (signo == SIGINT)
    my_putstr("\nmsh1$> ");
}

int	main(int ac, char **av, char **envp)
{
  char	**env;

  env = get_env(envp, 0);
  my_putstr("msh1$> ");
  signal(SIGINT, sig_handler);
  start_shell(env);
  return (0);
}
