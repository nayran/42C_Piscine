# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 11:37:01 by nasimon-          #+#    #+#              #
#    Updated: 2019/10/23 16:56:27 by nasimon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = 	srcs/main.c srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putnbr.c		\
		srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcpy.c srcs/ft_init.c	\
		srcs/ft_strnlen.c srcs/ft_largura.c srcs/ft_resultado.c 			\
		srcs/ft_strcut.c srcs/ft_preenche.c srcs/ft_jumpline.c 				\
		srcs/tabuleiro.c srcs/ft_cacetinho.c srcs/ft_pos_check.c 			\
		srcs/ft_big_kiko.c srcs/ft_quadrado.c srcs/ft_optimusprime.c 		\
		srcs/ft_check_vet.c srcs/ft_buzzlightyear.c srcs/ft_kindle.c

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	gcc ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME):
		gcc $(FLAGS) -o $(NAME) $(SRC)
clean:
		/bin/rm -f
fclean: clean
		/bin/rm -f $(NAME)
re: fclean all

.PHONY: clean