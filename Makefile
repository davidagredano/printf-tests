LIB_DIR = ../ft_printf/

LIB = $(LIB_DIR)libftprintf.a

LIB_SRCS = $(addprefix $(LIB_DIR), ft_printf.c print_conversions.c)

LIB_OBJS = $(LIB_SRCS:.c=.o)

LIB_SRCS_BONUS = $(addprefix $(LIB_DIR), ft_printf_bonus.c \
                 spec_parser_bonus.c ft_print_c_bonus.c ft_print_s_bonus.c \
                 ft_print_p_bonus.c ft_print_d_bonus.c ft_print_u_bonus.c \
                 ft_print_x_bonus.c utils_bonus.c)

LIB_OBJS_BONUS = $(LIB_SRCS_BONUS:.c=.o)

SRCS = main.c utils.c ft_print_c_tests.c ft_print_s_tests.c ft_print_p_tests.c \
       ft_print_d_tests.c ft_print_u_tests.c ft_print_x_tests.c \
       ft_print_X_tests.c ft_print_percent_tests.c ft_print_mixed_tests.c

OBJS = $(SRCS:.c=.o)

SRCS_BONUS = main_bonus.c utils.c spec_parser_tests.c ft_print_c_tests.c \
             ft_print_s_tests.c ft_print_p_tests.c ft_print_d_tests.c \
             ft_print_u_tests.c ft_print_x_tests.c ft_print_X_tests.c \
             ft_print_percent_tests.c ft_print_mixed_tests.c \
             ft_print_c_bonus_tests.c ft_print_s_bonus_tests.c \
             ft_print_p_bonus_tests.c ft_print_d_bonus_tests.c \
             ft_print_u_bonus_tests.c ft_print_x_bonus_tests.c

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

NAME = test

CC = cc

CFLAGS = -L$(LIB_DIR) -lftprintf

all: $(NAME)

$(NAME): $(LIB_OBJS) $(OBJS)
	make -C $(LIB_DIR)
	$(CC) $(OBJS) $(CFLAGS) -o $@

bonus: $(LIB_OBJS_BONUS) $(OBJS_BONUS)
	make bonus -C $(LIB_DIR)
	$(CC) $(OBJS_BONUS) $(CFLAGS) -o $(NAME)

%.o: %.c Makefile tests.h
	$(CC) -c -o $@ $<

clean: 
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
