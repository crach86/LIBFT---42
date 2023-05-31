CC= gcc
CFLAGS= -Wall -Wextra -Werror
SRC=ft_atoi.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_putchar_fd.c ft_putstr_fd.c \
ft_putnbr_fd.c ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c ft_tolower.c \
ft_toupper.c ft_strdup.c \
ft_strnstr.c ft_strchr.c \
ft_strrchr.c \
ft_memcpy.c ft_memmove.c \
ft_memcmp.c ft_memchr.c \
ft_memset.c ft_bzero.c \
ft_calloc.c ft_itoa.c \
ft_putendl_fd.c ft_striteri.c \
ft_strmapi.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c \

SRCB=ft_lstsize_bonus.c ft_lstnew_bonus.c ft_lstmap_bonus.c ft_lstlast_bonus.c\
ft_lstiter_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c\
ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c

OFILESB=$(SRCB:.c=.o)
OFILES= $(SRC:.c=.o)
INCLUDE= ./includes
NAME= libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)
%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)
	rm -f $(OFILESB)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OFILES)

bonus:$(OFILESB)

	ar rcs $(NAME) $(OFILESB)

.PHONY: all fclean clean re
