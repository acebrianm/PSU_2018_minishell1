/*
** mysh.h for mysh in /home/acebrianm/EPITECH/PSU_2018_minishell1/include
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Sat Dec  3 14:53:01 2016 cebria_a
** Last update Sat Dec  3 17:25:00 2016 cebria_a
*/

#ifndef MYSH_H_
#define MYSH_H_

void	print_err(char *str);

int	my_strncmp(char *input, char *str, int n);

void	start_shell(char **env);

void	change_dir(char **env, char *input, char **cmd);

void	print_env(char **env);

#endif /* !MYSH_H_ */
