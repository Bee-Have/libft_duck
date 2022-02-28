NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = $(shell find Srcs -type d)
OBJS_DIR = Objs
INC_DIR = ./Includes/
INCLUDES = -I$(INC_DIR)

vpath %.c $(foreach dir, $(SRCS_DIR), $(dir):)

SRCS = ft_add_tab.c ft_erase.c \
		ft_tabjoin.c ft_tablen.c \
		ft_make_tab.c ft_tabdup.c \
		ft_freetab.c ft_insert_tab.c \
		ft_tabntab.c \
		ft_intcmp.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memcmp.c \
		ft_strchr.c ft_strcmp.c ft_strlen.c \
		ft_strnstr.c ft_strncmp.c \
		ft_strrchr.c ft_strsrch.c \
		ft_atoi.c ft_itoa.c \
		ft_lstadd_back.c ft_lstadd_front.c \
		ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c \
		ft_lstsize.c \
		ft_putchar.c ft_putstr.c ft_putstr_fd.c \
		ft_print_tab.c ft_putnbr.c \
		ft_calloc.c ft_memccpy.c \
		ft_memchr.c ft_memcpy.c \
		ft_memset.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c \
		ft_strmapi.c ft_substr.c \
		ft_strnew.c \
		ft_bzero.c ft_del_one.c ft_memmove.c \
		ft_split.c ft_strjoin.c \
		ft_strtrim.c ft_tolower.c \
		ft_toupper.c

OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:.c=.o))

all: $(NAME)

test:
	echo $(SRCS)
	echo $(OBJS)
	echo $(OBJS_DIR)
	echo $(SRCS_DIR)
	echo $(INC_DIR)

$(NAME): $(OBJS)
	ar rc $@ $^
	ranlib $(NAME)
	echo "Libft finished compiling :D"

$(OBJS_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean test