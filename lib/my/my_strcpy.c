/*
** my_strcpy.c for d06 in /home/acebrianm/EPITECH/CPool_Day06
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Mon Oct 10 09:56:24 2016 cebria_a
** Last update Mon Oct 10 17:07:58 2016 cebria_a
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
