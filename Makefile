# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 16:55:27 by amarini-          #+#    #+#              #
#    Updated: 2021/06/15 19:03:53 by amarini-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = $(find Srcs -type d)
#INC_DIR = ./Includes/libft
#INC_FLAGS = -L$(INC_DIR)

#vpath %.c $(foreach dir, $(SRC_DIR), $(dir):)

NAME = libft.a
SRCS = Srcs/Checks/ft_isalnum.c Srcs/Checks/ft_isalpha.c \
		Srcs/Checks/ft_isascii.c Srcs/Checks/ft_isdigit.c \
		Srcs/Checks/ft_isprint.c Srcs/Checks/ft_memcmp.c \
		Srcs/Checks/ft_strchr.c Srcs/Checks/ft_strlen.c \
		Srcs/Checks/ft_strnstr.c Srcs/Checks/ft_strncmp.c \
		Srcs/Checks/ft_strrchr.c \
		Srcs/Digits/ft_atoi.c Srcs/Digits/ft_itoa.c \
		Srcs/Lists/ft_lstadd_back.c Srcs/Lists/ft_lstadd_front.c \
		Srcs/Lists/ft_lstclear.c Lists/ft_lstdelone.c Lists/ft_lstiter.c \
		Lists/ft_lstlast.c Lists/ft_lstmap.c Lists/ft_lstnew.c \
		Lists/ft_lstsize.c \
		Lists/Strings/S_Copy/ft_calloc.c Lists/Strings/S_Copy/ft_memccpy.c \
		Lists/Strings/S_Copy/ft_memchr.c Lists/Strings/S_Copy/ft_memcpy.c \
		Lists/Strings/S_Copy/ft_memset.c Lists/Strings/S_Copy/ft_strdup.c \
		Lists/Strings/S_Copy/ft_strlcat.c Lists/Strings/S_Copy/ft_strlcpy.c \
		Lists/Strings/S_Copy/ft_strmapi.c Lists/Strings/S_Copy/ft_substr.c \
		Lists/Strings/ft_bzero.c Lists/Strings/ft_memmove.c \
		Lists/Strings/ft_split.c Lists/Strings/ft_strjoin.c \
		Lists/Strings/ft_strtrim.c Lists/Strings/ft_tolower.c \
		Lists/Strings/ft_toupper.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

#.c.o:
#	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		ar rc $@ $^
		ranlib $(NAME)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean
