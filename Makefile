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
SRC=./src/ft_memset.c \
	./src/ft_atoi.c \
	./src/ft_bzero.c \
	./src/ft_count_words.c \
	./src/ft_isalnum.c \
	./src/ft_isalpha.c \
	./src/ft_isascii.c \
	./src/ft_isdigit.c \
	./src/ft_isprint.c \
	./src/ft_itoa.c \
	./src/ft_lstadd.c \
	./src/ft_lstdel.c \
	./src/ft_lstdelone.c \
	./src/ft_lstiter.c \
	./src/ft_lstlen.c \
	./src/ft_lstmap.c \
	./src/ft_lstnew.c \
	./src/ft_lstprint.c \
	./src/ft_memalloc.c \
	./src/ft_memccpy.c \
	./src/ft_memchr.c \
	./src/ft_memcmp.c \
	./src/ft_memcpy.c \
	./src/ft_memdel.c \
	./src/ft_memmove.c \
	./src/ft_memset.c \
	./src/ft_putchar.c \
	./src/ft_putchar_fd.c \
	./src/ft_putendl.c \
	./src/ft_putendl_fd.c \
	./src/ft_putnbr.c \
	./src/ft_putnbr_fd.c \
	./src/ft_putstr.c \
	./src/ft_putstr_fd.c \
	./src/ft_sqrt.c \
	./src/ft_stralldel.c \
	./src/ft_strcat.c \
	./src/ft_strchr.c \
	./src/ft_strclr.c \
	./src/ft_strcmp.c \
	./src/ft_strcpy.c \
	./src/ft_strdel.c \
	./src/ft_strdup.c \
	./src/ft_strequ.c \
	./src/ft_striter.c \
	./src/ft_striteri.c \
	./src/ft_strjoin.c \
	./src/ft_strlcat.c \
	./src/ft_strlen.c \
	./src/ft_strmap.c \
	./src/ft_strmapi.c \
	./src/ft_strncat.c \
	./src/ft_strncmp.c \
	./src/ft_strncpy.c \
	./src/ft_strnequ.c \
	./src/ft_strnew.c \
	./src/ft_strnstr.c \
	./src/ft_strrchr.c \
	./src/ft_strsplit.c \
	./src/ft_strstr.c \
	./src/ft_strsub.c \
	./src/ft_strtrim.c \
	./src/ft_tolower.c \
	./src/ft_toupper.c \
	./src/get_next_line.c \
	./src/check_percent.c \
	./src/ft_printf.c \
	./src/ft_putnbr_base.c \
	./src/write_symbol_s_uni.c \
	./src/write_to_buffer.c \
	./src/write_type_c.c \
	./src/write_type_s.c \
	./src/write_type_d_i.c \
	./src/write_type_x_p.c \
	./src/write_type_o.c \
	./src/write_type_u.c \
	./src/write_colors.c
OBJ=$(SRC:.c=.o)
NAME=libft.a
INCLUDE=include
HEADER=include/libft.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@ar rc $(NAME) $(OBJ)
	@ printf "|---------------------------------|\n ✅ | $(WHITE)[$(GREEN)done$(WHITE)]$(COLOR_OFF) - libft.a\n|---------------------------------|\n"

src/%.o: src/%.c
	@$(CC) $(CFLAGS) -o $@ -c $< -I $(INCLUDE)
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
