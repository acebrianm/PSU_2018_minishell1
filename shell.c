/*
** shell.c for shell in /home/acebrianm/EPITECH/PSU_2018_minishell1
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Sat Dec  3 15:13:33 2016 cebria_a
** Last update Mon Dec 19 21:14:10 2016 cebria_a
*/

#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <my.h>
#include <mysh.h>
#include <get_next_line.h>

void	run_program(char **env, char **cmd, int i)
{
  char 	**paths;

  while (my_strncmp(env[i], "PATH", 4) != 1)
    i++;
  if ((paths = malloc(sizeof(char *) * my_strlen(env[i]) + 1)) == NULL)
    print_err("Couldn't allocate memory.\n");
  paths = my_str_to_wordtab(env[i], 2);
  i = 0;
  while (paths[i])
    {
      paths[i] = my_strcat(paths[i], cmd[0]);
      if (access(paths[i], F_OK && X_OK) == 0)
        execve(paths[i], cmd, env);
      free(paths[i++]);
    }
}

void	start_process(char **env, char *input, char **cmd)
{
  if (my_strncmp("cd", input, 2) == 1)
    change_dir(env, input, cmd);
  else if (my_strcmp("env", input) == 0)
    print_env(env);
  else
    run_program(env, cmd, 0);
  exit(EXIT_SUCCESS);
}

char	**call_envs(char **env, char *input, int type)
{
  my_putstr("msh1$> ");
  if (type == 1)
    return (set_env(env, input));
  else
    return (unset_env(env, input));
}

void	start_shell(char **env)
{
  pid_t	kiddo;
  char 	*input;
  char 	**cmd;

  while ((input = get_next_line(0)) && my_strcmp(input, "exit") != 0)
    {
      cmd = my_str_to_wordtab(input, 1);
      if (my_strncmp("setenv", input, 6) == 1)
        env = call_envs(env, input, 1);
      else if (my_strncmp("unsetenv", input, 8) == 1)
        env = call_envs(env, input, 2);
      else
        {
          if ((kiddo = fork()) < 0)
            print_err("Couldn't create the process.\n");
          else if (kiddo == 0)
            start_process(env, input, cmd);
          else
            {
              wait(0);
              my_putstr("msh1$> ");
            }
        }
    }
  exit(EXIT_SUCCESS);
}
