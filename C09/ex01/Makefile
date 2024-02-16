# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lawences <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 18:03:38 by lawences          #+#    #+#              #
#    Updated: 2024/02/15 19:17:02 by lawences         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_LIST = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRC = $(addprefix srcs/, $(SRC_LIST))
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
HEADER = includes/ft.h

all:$(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "all compiled"

$(OBJ): $(SRC) $(HEADER)
	@$(CC) $(CFLAGS) -c -Iincludes $< -o $@
	@echo "compiled $<"

clean:
	@rm -f $(OBJ)
	@echo "clean objects"

fclean: clean
	@rm -f $(NAME)
	@echo "clean libft.a"

re: fclean $(NAME)