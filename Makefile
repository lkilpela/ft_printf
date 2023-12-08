CCFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRCS = ft_printf.c	ft_printf_utils.c	ft_printf_utils2.c

HDRS = ft_printf.h
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

%.o : %.c $(HDRS)
	$(CC) $(CCFLAGS) -c -I. $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re