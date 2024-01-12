SRC = ft_printf.c ft_prntchar.c ft_prnthex.c ft_prntnbr.c ft_prntstr.c ft_spec.c ft_prntptr.c ft_prntun.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ = ${SRC:.c=.o}
LIBS = ar rcs
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBS) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS)  -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all