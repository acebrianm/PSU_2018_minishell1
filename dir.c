/*
** dir.c for cd in /home/acebrianm/EPITECH/PSU_2018_minishell1
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Sat Dec  3 16:12:37 2016 cebria_a
** Last update Mon Dec 19 20:41:40 2016 cebria_a
*/

#include <unistd.h>
#include <stdlib.h>
#include <my.h>
#include <mysh.h>
#include <sys/stat.h>

void	empty_cd(char **env, int i)
{
  char	*path;
  char	**paths;

  while (my_strncmp(env[i], "HOME", 4) != 1)
    i++;
  path = my_strdup(env[i]);
  paths = my_str_to_wordtab(path, 2);
  chdir(paths[1]);
}

int		is_dir(char *path)
{
  struct stat	st;

  stat(path, &st);
  if (S_ISDIR(st.st_mode))
    return (1);
  else
    return (0);
}


void	change_dir(char **env, char *input, char **cmd)
{
  if (my_strncmp(input, "cd", 2) == 1)
    {
      if (cmd[1] == 0)
        empty_cd(env, 0);
      else if (access(cmd[1], F_OK & R_OK) == -1 && (is_dir(cmd[1]) == 0))
        {
          my_putstr("cd : no such file or directory: ");
          my_putstr(cmd[1]);
          my_putchar('\n');
        }
      else
        chdir(cmd[1]);
    }
  my_putstr("msh1$> ");
}
