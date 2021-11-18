NAME	=	libftprintf.a

SRCS	=	

HEADER	=	

CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra -I$(HEADER)

OBJ		=	$(patsubst %.c, %.o, $(SRCS))

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ) $?

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@rm -f $(NAME)

re		:	fclean all

