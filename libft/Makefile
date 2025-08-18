NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

SRCS = ft_isprint.c ft_strlen.c ft_strdup.c ft_strlcpy.c ft_substr.c ft_split.c                                                     \

OBJS = $(SRCS:.c=.o)

all: $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re