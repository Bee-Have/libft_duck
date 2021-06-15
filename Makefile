# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 16:55:27 by amarini-          #+#    #+#              #
#    Updated: 2021/06/15 17:40:24 by amarini-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = $(find Srcs -type d)
INC_DIR = Include
INC_FLAGS = -L$(INC_DIR)

vpath %.c $(foreach dir, $(SRC_DIR), $(dir):)

NAME = libft.a
SRCS = Checks/ft_isalnum.c Checks/ft_isalpha.c Checks/ft_isascii.c \
		Checks/ft_isdigit.c Checks/ft_isprint.c Checks/ft_memcmp/c \
		Checks/ft_strchr.c Checks/ft_strlen.c Checks/ft_strncmp.c \
		Checks/ft_strnstr.c Checks/ft_strrchr.c \
		Digits/ft_atoi.c Digits/ft_itoa.c \
		Lists/ft_lstadd_back.c Lists/ft_lstadd_front.c Lists/ft_lstclear.c \
		Lists/ft_lstdelone.c Lists/ft_lstiter.c Lists/ft_lstlast.c \
		Lists/ft_lstmap.c Lists/ft_lstnew.c Lists/ft_lstsize.c \
		Strings/S_Copy/ft_calloc.c Strings/S_Copy/ft_memccpy.c \
		Strings/S_Copy/ft_memchr.c Strings/S_Copy/ft_memcpy.c \
		Strings/S_Copy/ft_memset.c Strings/S_Copy/ft_strdup.c \
		Strings/S_Copy/ft_strlcat.c Strings/S_Copy/ft_strlcpy.c \
		Strings/S_Copy/ft_strmapi.c Strings/S_Copy/ft_substr.c \
		Strings/ft_bzero.c Strings/ft_memmove.c Strings/ft_split.c \
		Strings/ft_strjoin.c Strings/ft_strtrim.c String/ft_tolower.c \
		Strings/ft_toupper.c
OBJS = $(SRC:.c=.o)

all:$(NAME)

$(NAME): $(OBJ)
		ar rc $@ $^ $(INC_FLAGS)
		ranlib $(NAME)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean
