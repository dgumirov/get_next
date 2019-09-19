# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvincent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 11:33:58 by tvincent          #+#    #+#              #
#    Updated: 2019/09/19 20:32:45 by tvincent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_lstdelone.c	ft_putendl.c	ft_striter.c	ft_strrchr.c \
ft_lstiter.c	ft_putendl_fd.c	ft_striteri.c	ft_strrev.c \
ft_atoi.c	ft_lstmap.c	ft_putnbr.c	ft_strjoin.c	ft_strsplit.c \
ft_bzero.c	ft_lstnew.c	ft_putnbr_fd.c	ft_strlcat.c	ft_strstr.c \
ft_freed.c	ft_memalloc.c	ft_putstr.c	ft_strlen.c	ft_strsub.c \
ft_isalnum.c	ft_memccpy.c	ft_putstr_fd.c	ft_strlowcase.c	ft_strtrim.c \
ft_isalpha.c	ft_memchr.c	ft_strcat.c	ft_strmap.c	ft_strupcase.c \
ft_isascii.c	ft_memcmp.c	ft_strchr.c	ft_strmapi.c	ft_tolower.c \
ft_isdigit.c	ft_memcpy.c	ft_strclr.c	ft_strncat.c	ft_toupper.c \
ft_isprint.c	ft_memdel.c	ft_strcmp.c	ft_strncmp.c	ft_wlen.c \
ft_isspace.c	ft_memmove.c	ft_strcpy.c	ft_strncpy.c	ft_word_cnt.c \
ft_itoa.c	ft_memset.c	ft_strdel.c	ft_strnequ.c \
ft_lstadd.c	ft_putchar.c	ft_strdup.c	ft_strnew.c \
ft_lstdel.c	ft_putchar_fd.c	ft_strequ.c	ft_strnstr.c



OBJ = $(SRC:.c=.o)
NAME = libft.a

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ) 
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	@gcc -Wall -Werror -Wextra -I. -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
