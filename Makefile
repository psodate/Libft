NAME 		= 	libft.a
CC 			= 	gcc
CFLAGS 		= 	-Wall -Wextra -Werror
AR 			=	ar rcs

SRCS 		=	ft_case.c \
				ft_char_utils.c \
				ft_convert.c \
				ft_mem_basic.c \
       			ft_mem_extra.c \
				ft_print_fd.c \
				ft_split.c \
				ft_string.c \
				ft_string_tools.c \
       			ft_strn_utils.c 

BONUS_SRCS	=	ft_lst_basics_bonus.c \
				ft_lst_add_bonus.c \
				ft_lst_delete_bonus.c \
				ft_lst_apply_bonus.c

OBJS		=	$(SRCS:.c=.o)
BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus:  $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re