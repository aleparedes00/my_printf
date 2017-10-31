##
## Makefile for  in /home/ale/week2/libmy/parede_h/libmy_01
##
## Made by PAREDES Ale
## Login   <parede_h@etna-alternance.net>
##
## Started on  Fri Oct 20 19:11:05 2017 PAREDES Ale
## Last update Fri Oct 27 07:50:46 2017 PAREDES Ale
##
CC	=	gcc

NAME	=	libmy.a

SRC	=	my_getnbr.c		\
		my_isneg.c		\
		my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_strcat.c		\
		my_strcmp.c		\
		my_strcpy.c		\
		my_strlen.c		\
		my_strncat.c		\
		my_strncmp.c		\
		my_strncpy.c		\
		my_strstr.c		\
		my_swap.c		\
		my_str_to_wordtab.c	\
		my_strdup.c		\
		my_strupcase.c		\
		my_is_odd.c

FLAGS	=	-W -Wall -Werror
OBJ	=	$(SRC:%.c=%.o)
RM	=	rm -f


$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		$(RM) $(OBJ)
		ranlib $(NAME)

all:		$(NAME)

clean:
		$(RM) -f $(OBJ)

fclean:		clean
		$(RM) -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean
