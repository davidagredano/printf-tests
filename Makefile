LIB_DIR = ../printf

LIB = $(LIB_DIR)/libftprintf.a

LIB_MAIN_OBJ = $(LIB_DIR)/ft_printf.o

LIB_MAIN_OBJ_BONUS = $(LIB_DIR)/ft_printf_bonus.o

SRCS = main.c utils.c ft_print_c_tests.c ft_print_s_tests.c ft_print_p_tests.c \
       ft_print_di_tests.c ft_print_u_tests.c ft_print_x_tests.c \
	   ft_print_X_tests.c ft_print_percent_tests.c ft_print_mixed_tests.c

OBJS = $(SRCS:.c=.o)

NAME = test

CC = cc

CFLAGS = -L$(LIB_DIR) -lftprintf

all: $(NAME)

$(NAME): $(LIB_MAIN_OBJ) $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $@

$(LIB_MAIN_OBJ):
	make -C $(LIB_DIR)

$(LIB_MAIN_OBJ_BONUS):
	make bonus -C $(LIB_DIR)

%.o: %.c Makefile tests.h
	$(CC) -c -o $@ $<

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(LIB_MAIN_OBJ_BONUS) $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
	@touch bonus

.PHONY: all clean fclean re
