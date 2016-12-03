/*
** err.c for err in /home/acebrianm/EPITECH/PSU_2018_minishell1
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Sat Dec  3 14:49:32 2016 cebria_a
** Last update Sat Dec  3 14:59:33 2016 cebria_a
*/

#include <my.h>
#include <unistd.h>
#include <stdlib.h>

void		print_err(char *s)
{
  write(2, s, my_strlen(s));
  exit(EXIT_FAILURE);
}
