/*
** my_strncmp.c for strncmp in /home/acebrianm/EPITECH/PSU_2018_minishell1/lib/my
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Mon Dec 19 21:11:12 2016 cebria_a
** Last update Mon Dec 19 21:11:31 2016 cebria_a
*/

int     my_strncmp(char *input, char *str, int n)
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
