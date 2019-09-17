NAME = fillit

CC = gcc 

FLAGS = -Wall -Werror -Wextra

INCLUDES = -I .

SRC = src/solve.c src/validate.c src/lst_tet.c src/t_tet.c src/fillit.c \
	src/square.c src/ft_bzero.c src/ft_memalloc.c src/ft_closesqrt.c \
	src/ft_memcpy.c src/ft_lstdel.c src/ft_memset.c src/ft_lstnew.c \
	src/ft_putendl.c src/ft_lstpushback.c src/ft_strnew.c

OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) $(INCLUDES) -o $@ -c $<

RM = rm -f 

$(NAME): $(OBJ)
	$(CC) -o $@ $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
