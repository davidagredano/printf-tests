SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

NAME = printf_tests

CC = cc

LOPTS = -L../printf -lftprintf

all: ${NAME}

$(NAME): $(OBJS)
	make -C ../printf
	$(CC) $^ $(LOPTS) -o $@

%.o: %.c Makefile printf_tests.h
	$(CC) -c -o $@ $<

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

t: re
	./$(NAME)

print_int: fclean
	make -C ../printf
	$(CC) ft_$@.c $(LOPTS) -o $(NAME)
	./$(NAME)

print_uint: fclean
	make -C ../printf
	$(CC) ft_$@.c $(LOPTS) -o $(NAME)
	./$(NAME)

print_hex: fclean
	make -C ../printf
	$(CC) ft_$@.c $(LOPTS) -o $(NAME)
	./$(NAME)

print_ptr: fclean
	make -C ../printf
	$(CC) ft_$@.c $(LOPTS) -o $(NAME)
	./$(NAME)

print_char: fclean
	make -C ../printf
	$(CC) ft_$@.c $(LOPTS) -o $(NAME)
	./$(NAME)

print_str: fclean
	make -C ../printf
	$(CC) ft_$@.c $(LOPTS) -o $(NAME)
	./$(NAME)

.PHONY: all clean fclean re t print_int print_uint print_hex print_ptr \
	print_char print_str
