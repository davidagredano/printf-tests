SRCS = ft_printf.c

UTILS = utils.c

OBJS = $(SRCS:.c=.o)

NAME = printf_tests

CC = cc

LOPTS = -L../printf -lftprintf

all: ${NAME}

$(NAME): $(OBJS)
	make -C ../printf
	$(CC) $^ $(UTILS) $(LOPTS) -o $@

%.o: %.c Makefile printf_tests.h
	$(CC) -c -o $@ $<

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

t: re
	./$(NAME)

d: fclean
	make -C ../printf
	$(CC) ft_print_int.c $(UTILS) $(LOPTS) -o $(NAME)
	./$(NAME)

i: d

u: fclean
	make -C ../printf
	$(CC) ft_print_uint.c $(UTILS) $(LOPTS) -o $(NAME)
	./$(NAME)

x: fclean
	make -C ../printf
	$(CC) ft_print_hex.c $(UTILS) $(LOPTS) -o $(NAME)
	./$(NAME)

X: fclean
	make -C ../printf
	$(CC) ft_print_hex_caps.c $(UTILS) $(LOPTS) -o $(NAME)
	./$(NAME)

p: fclean
	make -C ../printf
	$(CC) ft_print_ptr.c $(UTILS) $(LOPTS) -o $(NAME)
	./$(NAME)

s: fclean
	make -C ../printf
	$(CC) ft_print_str.c $(UTILS) $(LOPTS) -o $(NAME)
	./$(NAME)

c: fclean
	make -C ../printf
	$(CC) ft_print_char.c $(UTILS) $(LOPTS) -o $(NAME)
	./$(NAME)

percent: fclean
	make -C ../printf
	$(CC) ft_print_percent.c $(UTILS) $(LOPTS) -o $(NAME)
	./$(NAME)

putstr: fclean
	make -C ../printf
	$(CC) ft_$@.c $(UTILS) $(LOPTS) -o $(NAME)
	./$(NAME)

.PHONY: all clean fclean re t d i u x X p s c percent putstr
