NAME		=	libft.a

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

SRC		    =   ft_itoa_base.c \
				ft_numlen_base.c \
				ft_numlen.c \
				ft_putchar.c \
				ft_putnbr_base.c \
				ft_strlen.c \
				ft_unsigned_itoa.c \
				ft_itoa.c \

OBJ			= $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

.c.o:		
			$(CC) $(FLAGS) -I includes -o $@ -c $<

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean reclear