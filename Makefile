NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

AR = ar rcs
RM = rm -f

HDRS = ft_printf.h

SRCS = ft_printf.c ft_print_char.c ft_print_str.c \
	ft_print_int.c ft_print_uint.c ft_print_hexl.c \
	ft_print_hexu.c ft_print_ptr.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	$(CC) $(CFLAGS) main.c $(SRCS) -o run_test

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re
