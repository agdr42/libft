NAME = libft.a

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_tolower.c ft_toupper.c ft_bzero.c ft_malloc.c ft_calloc.c ft_memset.c ft_memcmp.c ft_memcpy.c ft_strdup.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strlcpy.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memmove.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstmap.c ft_lstiter.c ft_lstclear.c

OBJS = $(SRCS:.c=.o) $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_SRCS)
	gcc -Wall -Wextra -Werror -c $(BONUS_SRCS)
	ar rc $(NAME) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus