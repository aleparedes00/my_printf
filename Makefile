##
## Makefile for  in /home/ale/shifumi/parede_h/shifumi
##
## Made by PAREDES Ale
## Login   <parede_h@etna-alternance.net>
##
## Started on  Fri Oct 20 19:11:05 2017 PAREDES Ale
## Last update Mon Nov  6 10:40:40 2017 PAREDES Ale
##
##
CC	=	gcc

NAME	=	my_print

SRC     =      	main.c			\
		char.c			\
		string.c		\
		int.c			\
		function_array_pointer.c\
		my_printf.c		\
		buffer.c

FLAGS	=	-W -Wall -Werror
OBJ	=	$(SRC:.c=.o)
LDFLAGS	=	-Llibmy_02/. -lmy
RM	=	rm -f


$(NAME):	$(OBJ)
		$(CC) -g $(FLAGS) $(SRC) -o $(NAME) $(LDFLAGS)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all re clean fclean
