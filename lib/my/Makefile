##
## Makefile for d10 in /home/acebrianm/EPITECH/CPool_Day10
## 
## Made by cebria_a
## Login   <alexandro.cebrianmancera@epitech.net>
## 
## Started on  Mon Oct 17 15:36:52 2016 cebria_a
## Last update Sat Dec 03 15:00:35 2016 
##

CC	=	gcc

RM	=	rm -f

IDIR	=	../../include

CFLAGS	=	-Wextra -Wall -Werror -I$(IDIR)

SRC	=	my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_strcat.c		\
		my_strcmp.c		\
		my_strcpy.c		\
		my_strdup.c		\
		my_strlen.c		\
		my_str_to_wordtab.c	\
		get_next_line.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
