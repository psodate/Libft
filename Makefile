NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_case.c ft_char_utils.c ft_convert.c ft_mem_basic.c \
       ft_mem_extra.c ft_print_fd.c ft_split.c ft_string.c \
       ft_strn_utils.c ft_string_tools.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re