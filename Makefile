NAME        = push_swap

CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I libft -I includes
RM          = rm -f

LIBFT_DIR   = libft
LIBFT       = $(LIBFT_DIR)/libft.a

SRCS        = main.c \
              disorder.c \
              parsing.c \
              push.c \
              rev_rotate.c \
              rotate.c \
              sort_adaptive.c \
              sort_complex.c \
              sort_medium.c \
              sort_simple.c \
              sort_utils.c \
              stack_init.c \
              swap.c \
              utils.c \
              bench.c \
              sorts_basic.c

OBJS        = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re