SRC = 	ft_print_common.c \
		ft_printf\

OBJECT = $(SRC:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJECT)
	@gcc -Wall -Werror -Wextra -c $(SRC)
	@ar rc $(NAME) $(OBJECT)

clean : 
	@rm -rf $(OBJECT)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
