CCFLAGS = -Wall -Wextra -Werror -g
NAME = libftprintf.a

SRCS = ft_printf.c	ft_printf_utils.c	ft_printf_utils2.c

HDRS = ft_printf.h
LIBFT = libft/libft.a
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(LIBFT):
	make -C libft

%.o : %.c $(HDRS)
	$(CC) $(CCFLAGS) -c -I. -Ilibft $< -o $@

$(NAME): $(LIBFT) $(OBJS)
	ls libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	make clean -C libft
	rm -rf $(OBJS)

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re