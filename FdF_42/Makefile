# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghubert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/17 17:00:11 by ghubert           #+#    #+#              #
#    Updated: 2017/02/17 17:00:17 by ghubert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = srcs/main.c \
	  srcs/seg_tracer.c \
	  srcs/print_errors.c \
	  srcs/events_script.c \
	  srcs/send_to_trace.c \
	  srcs/messages.c \
	  srcs/add_function.c \

SRCO = main.o \
	   seg_tracer.o \
	   print_errors.o \
	   events_script.o \
	   send_to_trace.o \
	   messages.o \
	   add_function.o \

INCLUDE = includes/fdf.h \

FLAGS = -Wall -Wextra -Werror

$(NAME):
	@make -C libft/
	@gcc $(FLAGS) -I $(INCLUDE) -c $(SRC)
	@gcc $(SRCO) -o $(NAME) -lm -L libft/ -lft -lmlx -framework OpenGL -framework AppKit
	@echo "FdF is ready to go !"

all: $(NAME)

clean:
	@/bin/rm -f $(SRCO)
	@make clean -C libft/
	@echo "OBJ cleaned"

fclean: clean
	@/bin/rm -f $(NAME)
	@make fclean -C libft/
	@echo "Everything is clean and smooth"

re: fclean all
