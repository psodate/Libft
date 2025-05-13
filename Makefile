NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = 
OBJ = $(SRC:.c=.o)
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re