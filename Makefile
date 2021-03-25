##
## EPITECH PROJECT, 2020
## Makefle
## File description:
## Makefile
##

SRC	=	$(shell find src/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

all:	$(NAME)

$(NAME):
	gcc $(SRC)  -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system -I include -o $(NAME) -g3

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all