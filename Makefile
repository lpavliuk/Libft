# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 16:04:15 by opavliuk          #+#    #+#              #
#    Updated: 2018/03/28 10:28:00 by opavliuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc 
CFLAGS=-Wall -Werror -Wextra
DIR=Cfiles
SRC=*.c
OBJ=*.o
NAME=libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: $(DIR)/%.c
	$(CC) $(CFLAGS) -I ./ -o $@ -c $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
