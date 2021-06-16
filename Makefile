# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 16:55:27 by amarini-          #+#    #+#              #
#    Updated: 2021/06/16 15:51:28 by amarini-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = $(shell find Srcs -type d)
INC_DIR = ./Includes/libft
INC_FLAGS = -I$(INC_DIR)
OBJS_DIR = Objs

vpath %.c $(foreach dir, $(SRCS_DIR), $(dir):)

SRCS = ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memcmp.c \
		ft_strchr.c ft_strlen.c \
		ft_strnstr.c ft_strncmp.c \
		ft_strrchr.c \
		ft_atoi.c ft_itoa.c \
		ft_lstadd_back.c ft_lstadd_front.c \
		ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c \
		ft_lstsize.c \
		ft_calloc.c ft_memccpy.c \
		ft_memchr.c ft_memcpy.c \
		ft_memset.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c \
		ft_strmapi.c ft_substr.c \
		ft_bzero.c ft_memmove.c \
		ft_split.c ft_strjoin.c \
		ft_strtrim.c ft_tolower.c \
		ft_toupper.c
OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:.c=.o))

all: $(NAME)

test:
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(OBJS_DIR)
	@echo $(SRCS_DIR)
	@echo $(INC_DIR)

$(NAME): $(OBJS)
	@ar rc $@ $^
	@ranlib $(NAME)
	@echo "Libft finished compiling :D"

$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean test
