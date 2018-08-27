# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opavliuk <opavliuk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 16:04:15 by opavliuk          #+#    #+#              #
#    Updated: 2018/05/14 13:49:27 by opavliuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOR_OFF=\033[0m#			# Text Reset
BLACK	=\033[0;30m#		# Black
RED		=\033[0;31m#		# Red
GREEN	=\033[0;32m#		# Green
YELLOW	=\033[0;33m#		# Yellow
BLUE	=\033[0;34m#		# Blue
PURPLE	=\033[0;35m#		# Purple
CYAN	=\033[0;36m#		# Cyan
WHITE	=\033[0;37m#		# White

CC=gcc 
CFLAGS=-Wall -Werror -Wextra
SRC=./libft/ft_memset.c \
	./libft/ft_atoi.c \
	./libft/ft_bzero.c \
	./libft/ft_count_words.c \
	./libft/ft_isalnum.c \
	./libft/ft_isalpha.c \
	./libft/ft_isascii.c \
	./libft/ft_isdigit.c \
	./libft/ft_isprint.c \
	./libft/ft_itoa.c \
	./libft/ft_lstadd.c \
	./libft/ft_lstdel.c \
	./libft/ft_lstdelone.c \
	./libft/ft_lstiter.c \
	./libft/ft_lstlen.c \
	./libft/ft_lstmap.c \
	./libft/ft_lstnew.c \
	./libft/ft_lstprint.c \
	./libft/ft_memalloc.c \
	./libft/ft_memccpy.c \
	./libft/ft_memchr.c \
	./libft/ft_memcmp.c \
	./libft/ft_memcpy.c \
	./libft/ft_memdel.c \
	./libft/ft_memmove.c \
	./libft/ft_memset.c \
	./libft/ft_putchar.c \
	./libft/ft_putchar_fd.c \
	./libft/ft_putendl.c \
	./libft/ft_putendl_fd.c \
	./libft/ft_putnbr.c \
	./libft/ft_putnbr_fd.c \
	./libft/ft_putstr.c \
	./libft/ft_putstr_fd.c \
	./libft/ft_sqrt.c \
	./libft/ft_stralldel.c \
	./libft/ft_strcat.c \
	./libft/ft_strchr.c \
	./libft/ft_strclr.c \
	./libft/ft_strcmp.c \
	./libft/ft_strcpy.c \
	./libft/ft_strdel.c \
	./libft/ft_strdup.c \
	./libft/ft_strequ.c \
	./libft/ft_striter.c \
	./libft/ft_striteri.c \
	./libft/ft_strjoin.c \
	./libft/ft_strlcat.c \
	./libft/ft_strlen.c \
	./libft/ft_strmap.c \
	./libft/ft_strmapi.c \
	./libft/ft_strncat.c \
	./libft/ft_strncmp.c \
	./libft/ft_strncpy.c \
	./libft/ft_strnequ.c \
	./libft/ft_strnew.c \
	./libft/ft_strnstr.c \
	./libft/ft_strrchr.c \
	./libft/ft_strsplit.c \
	./libft/ft_strstr.c \
	./libft/ft_strsub.c \
	./libft/ft_strtrim.c \
	./libft/ft_tolower.c \
	./libft/ft_toupper.c \
	./libft/get_next_line.c \
	./libft/check_percent.c \
	./libft/ft_printf.c \
	./libft/ft_putnbr_base.c \
	./libft/write_symbol_s_uni.c \
	./libft/write_to_buffer.c \
	./libft/write_type_c.c \
	./libft/write_type_s.c \
	./libft/write_type_d_i.c \
	./libft/write_type_x_p.c \
	./libft/write_type_o.c \
	./libft/write_type_u.c \
	./libft/write_colors.c
OBJ=$(SRC:.c=.o)
NAME=libft.a
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	@ar rc $(NAME) $(OBJ)
	@ printf "|---------------------------------|\n ✅ | $(WHITE)[$(GREEN)done$(WHITE)]$(COLOR_OFF) - libft.a\n|---------------------------------|\n"

libft/%.o: libft/%.c
	@$(CC) $(CFLAGS) -o $@ -c $< -I ./
	@ printf "$(WHITE)[$(GREEN)created$(WHITE)]$(COLOR_OFF) - $@\n"

clean:
	@rm -f $(OBJ)
	@ printf "|---------------------------------|\n 🗑  | $(WHITE)[$(RED)remove$(WHITE)]$(COLOR_OFF) - objects of libft\n|---------------------------------|\n"

fclean: clean
	@rm -f $(NAME)
	@ printf "|---------------------------------|\n 🗑  | $(WHITE)[$(RED)remove$(WHITE)]$(COLOR_OFF) - $(NAME)\n|---------------------------------|\n"

re: fclean all

.PHONY: all, clean, fclean, re

re: fclean all
