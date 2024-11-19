CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRCS =	./Original_function/ft_strlcpy.c\
		./Original_function/ft_lstsize.c\
		./Original_function/ft_memset.c\
		./Original_function/ft_isalnum.c\
		./Original_function/ft_lstdelone.c\
		./Original_function/ft_strnstr.c\
		./Original_function/ft_putstr_fd.c\
		./Original_function/ft_lstmap.c\
		./Original_function/ft_strlen.c\
		./Original_function/ft_lstadd_front.c\
		./Original_function/ft_memmove.c\
		./Original_function/ft_strmapi.c\
		./Original_function/ft_substr.c\
		./Original_function/ft_isascii.c\
		./Original_function/ft_isprint.c\
		./Original_function/ft_isalpha.c\
		./Original_function/ft_putchar_fd.c\
		./Original_function/ft_calloc.c\
		./Original_function/ft_strchr.c\
		./Original_function/ft_putnbr_fd.c\
		./Original_function/ft_strncmp.c\
		./Original_function/ft_tolower.c\
		./Original_function/ft_lstclear.c\
		./Original_function/ft_itoa.c\
		./Original_function/ft_lstnew.c\
		./Original_function/ft_strjoin.c\
		./Original_function/ft_toupper.c\
		./Original_function/ft_memcmp.c\
		./Original_function/ft_striteri.c\
		./Original_function/ft_lstiter.c\
		./Original_function/ft_split.c\
		./Original_function/ft_strtoupper.c\
		./Original_function/ft_isdigit.c\
		./Original_function/ft_lstadd_back.c\
		./Original_function/ft_lstlast.c\
		./Original_function/ft_strlcat.c\
		./Original_function/ft_bzero.c\
		./Original_function/ft_strrchr.c\
		./Original_function/ft_atoi.c\
		./Original_function/ft_memchr.c\
		./Original_function/ft_putendl_fd.c\
		./Original_function/ft_strtrim.c\
		./Original_function/ft_strdup.c\
		./Original_function/ft_memcpy.c\
		./Added_function/ft_putnbru.c\
		./Added_function/ft_putnbr_base.c\
		./Added_function/ft_pttostr.c\
		./Added_function/ft_printf.c\
		./Added_function/get_next_line.c\
		./Added_function/ft_strcmp.c\
		./Added_function/ft_splitq.c\
		./Added_function/ft_wordcount.c\
		./Added_function/ft_fprintf/srcs/fd_printf.c\
		./Added_function/ft_fprintf/srcs/fd_pttostr.c\
		./Added_function/ft_fprintf/srcs/fd_putnbru.c\
		./Added_function/ft_fprintf/srcs/fd_putnbr_base.c\
		./Added_function/ft_fprintf/srcs/fd_putstr_fd.c\
		./Added_function/ft_fprintf/srcs/fd_putnbr_fd.c\
		./Added_function/ft_fprintf/srcs/fd_putchar_fd.c\
		./Added_function/ft_checkaccess.c\
		./Added_function/ft_tablen.c\
		./Added_function/ft_pfree.c\
		./Added_function/ft_tabfree.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@ar r $(NAME) $(OBJS)>/dev/null 2>&1
	@ranlib $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
