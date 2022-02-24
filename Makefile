##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## GoogleHashCode
##

##$(wildcard ./*.cpp)
SRC	=	$(wildcard ./*.cpp)

OBJ	=	$(SRC:.cpp=.o)

NAME 	=	googlehashcode

CFLAGS	=	-I./ -g

CFLAGS +=	-std=c++20 -Wall -Wextra -Werror -Wshadow -Wformat-security

CC =	g++

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

clean:
	$(RM) *~
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

lib/libmy.a:
	$(MAKE) -C

.Phony: all clean fclean re