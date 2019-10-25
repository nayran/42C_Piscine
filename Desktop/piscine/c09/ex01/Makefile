NAME = libft.a

C = ft_putchar.c	\
	ft_putstr.c		\
	ft_swap.c		\
	ft_strlen.c		\
	ft_strcmp.c

O = srcs/ft_putchar.o	\
	srcs/ft_putstr.o	\
	srcs/ft_swap.o		\
	srcs/ft_strlen.o	\
	srcs/ft_strcmp.o

H = includes/ft*.h 


FLAG = -Wall 	\
	   -Wextra 	\
	   -Werror

all: $(NAME)

$(NAME):
	cd srcs && gcc -c $(C) -I $(H)
	ar rc $(NAME) $(O)
	ranlib $(NAME)

clean:
	/bin/rm -f $(O)

fclean:
	/bin/rm -f $(NAME)

re: 
	fclean all

.PHONY: all clean fclean re
