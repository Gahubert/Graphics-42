# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghubert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/14 16:45:36 by ghubert           #+#    #+#              #
#    Updated: 2017/03/14 14:45:13 by ghubert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fractol

SRC= ./srcs/main.c \
		./srcs/mandelbrot.c \
		./srcs/move.c \
		./srcs/events.c \
		./srcs/draw.c \
		./srcs/julia.c \
		./srcs/b_ship.c \
		./srcs/julio.c \
		./srcs/tricorn.c \
		./srcs/error.c \

OBJ= ./main.o \
		./mandelbrot.o \
		./move.o \
		./events.o \
		./draw.o \
		./julia.o \
		./b_ship.o \
		./julio.o \
		./tricorn.o \
		./error.o \

FLAGS= -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
	@make -C libft/
	@gcc -c $(FLAGS) -I ./includes/fractol.h $(SRC)
	@gcc $(OBJ) -o $(NAME) -lm -L libft/ -lft -lmlx -framework OpenGL -framework AppKit
	@echo "\033[32m$(NAME) is now ready to go"

clean:
	@make clean -C libft/
	@/bin/rm -f $(OBJ)
	@echo "\033[34mSuccessfully removed OBJ files"

fclean: clean
	@make fclean -C libft/
	@/bin/rm -f $(NAME)
	@echo "\033[31mEverything is cleaned UP"

re: fclean all
