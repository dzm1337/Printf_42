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

test: $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lftprintf -o run_test

%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) run_test

re: fclean all

.PHONY: all clean fclean re test
