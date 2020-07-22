##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	bsq

CC		=	gcc -o

CFLAGS	+=	-I./include/

SRC		=	src/main.c			\
			src/algo_part.c		\
			src/modif_map.c		\
			lib/buffer_cpy.c	\
			lib/my_putchar.c	\
			lib/my_putstr.c		\
			lib/my_strlen.c		\

OBJ		=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME)	:
		$(CC) $(NAME) $(SRC) $(CFLAGS) -g3

clean:
	rm -f *~
	rm -f ~.o
	rm -f #*#

fclean:	clean
		rm -f $(NAME)

re: fclean all