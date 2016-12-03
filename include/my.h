/*
** my.h for d09 in /home/acebrianm/EPITECH/CPool_Day09/include
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Fri Oct 14 17:49:43 2016 cebria_a
** Last update Sat Dec  3 15:46:48 2016 cebria_a
*/

#ifndef MY_H_
# define MY_H_

void	my_putchar(char c);

int	my_put_nbr(int nb);

int	my_putstr(char *str);

int	my_strlen(char *str);

char	*my_strdup(char *src);

char	*my_strcpy(char *dest, char *src);

int	my_strcmp(char *s1, char *s2);

char	*my_strcat(char *dest, char *src);

char	**my_str_to_wordtab(char *str, int type);

#endif /* !MY_H_ */
