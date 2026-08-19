NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = main.c \
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
       utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re