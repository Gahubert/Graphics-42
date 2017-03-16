# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghubert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/14 14:39:46 by ghubert           #+#    #+#              #
#    Updated: 2017/03/14 14:50:07 by ghubert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= wolf3d

SRC= ./srcs/main.c \

OBJ= ./main.o \

FLAGS= -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
	@make -C libft/
	@gcc -c $(FLAGS) -I ./includes/wolf3d.h $(SRC)
	@gcc $(OBJ) -o $(NAME) -lm -L libft/ -lft -lmlx -framework OpenGL -framework AppKit
	@echo "\033[32m$(NAME) is now ready to go!"

clean:
	@make clean -C libft/
	@/bin/rm -f $(OBJ)
	@echo "\033[34mSuccessfully removed OBJ files"

fclean: clean
	@make fclean -C libft/
	@/bin/rm -f $(NAME)
	@echo "\033[31mEverything is cleaned UP"

re: fclean all
