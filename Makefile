##
## Makefile for  in /home/ale/shifumi/parede_h/shifumi
##
## Made by PAREDES Ale
## Login   <parede_h@etna-alternance.net>
##
## Started on  Fri Oct 20 19:11:05 2017 PAREDES Ale
## Last update Tue Oct 31 15:17:03 2017 PAREDES Ale
##
##
CC	=	gcc

NAME	=	my_print

SRC     =      	main.c			\
		char.c			\
		int.c			\
		function_array_pointer.c\
		my_printf.c

CFLAGS	=	-W -Wall -Werror
LDFLAGS	=	-lmy
RM	=	rm -f


$(NAME):
		$(CC) -g $(CFLAGS) $(SRC) -o $(NAME) -Llibmy_02/. $(LDFLAGS)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all re clean fclean
