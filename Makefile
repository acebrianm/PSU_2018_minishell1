##
## Makefile for ls in /Users/acebrianm/EPITECH/PSU_2018_my_ls
## 
## Made by cebria_a
## Login   <alexandro.cebrianmancera@epitech.eu>
## 
## Started on  Mon Nov 14 18:41:22 2016 cebria_a
## Last update Wed Dec 14 15:20:39 2016 
##

CC	=	gcc

RM	=	rm -f

MAKE	=	make

IDIR 	=	include/

LDIR	=	lib/my/

CFLAGS	=	-Wall -Wextra -Werror -I$(IDIR)

LFLAGS 	=	-L$(LDIR) -lmy

SRC	=	mysh.c		\
		err.c		\
		shell.c		\
		dir.c		\
		env_util.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

LIB	=	libmy.a

all:	$(NAME)

$(LIB):
	$(MAKE) -C $(LDIR)

$(NAME):	$(OBJ) $(LIB)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(LFLAGS)

clean:	
	$(RM) $(OBJ)
	$(MAKE) -C $(LDIR) clean

fclean:	clean
	$(MAKE) -C $(LDIR) fclean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
