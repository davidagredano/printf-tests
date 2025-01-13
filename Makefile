SRCS = main.c utils.c ft_print_c_tests.c ft_print_s_tests.c ft_print_p_tests.c \
       ft_print_di_tests.c ft_print_u_tests.c ft_print_x_tests.c \
	   ft_print_X_tests.c ft_print_percent_tests.c ft_print_mixed_tests.c

OBJS = $(SRCS:.c=.o)

NAME = test

CC = cc

LIB = -L../printf -lftprintf

all: ${NAME}

$(NAME): $(OBJS)
	make -C ../printf
	$(CC) $^ $(LIB) -o $@

%.o: %.c Makefile tests.h
	$(CC) -c -o $@ $<

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

putstr: fclean
	make -C ../printf
	$(CC) ft_$@.c $(UTILS) $(LOPTS) -o $(NAME)
	./$(NAME)

.PHONY: all clean fclean re putstr
