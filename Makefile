##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	src/event/close.c							\
		src/event/analyse_event.c					\
		src/window/my_window.c						\
		src/window/score.c				  			\
		src/window/params.c							\
		src/assets/init_assets.c					\
		src/assets/destroy_assets.c					\
		src/assets/anim.c							\
		src/assets/conf_rect.c						\
		src/assets/anim_enemies.c					\
		src/event/spacebar.c						\
		main.c

SRC_TEST =

SRC_UT =	utility/myprintf/my_printf_main.c		\
			utility/myprintf/my_printf_special.c	\
			utility/int_to_str.c					\
			utility/myprintf/my_printf.c			\
			utility/my_put_nbr.c					\
			utility/my_putchar.c					\
			utility/my_putstr.c

OBJ	=		$(SRC:.c=.o)

OBJ_UT =		$(SRC_UT:.c=.o)

INCLUDE	=	-I./include

LIB =		-L./ -lmy

LIB_G =		-lcsfml-graphics

LIB_W =		-lcsfml-window

LIB_S =		-lcsfml-system

LIB_M =		-lcsfml-audio -g3

RM = 		rm -rf

NAME	=	my_runner

NAME_LIB =	libmy.a

NAME_UT =	unit_tests

CFLAGS	=	-W -Werror -Wall -Wextra -I./include

CFLAGS_UT =	-lcriterion --coverage

all:		$(NAME)

$(NAME):	$(OBJ)	$(OBJ_UT)
			gcc -o $(NAME) $(INCLUDE) $(SRC) $(SRC_UT)  $(LIB_G) $(LIB_S) $(LIB_W) $(LIB_M)

unit_tests: fclean all
			gcc -o $(NAME_UT) $(SRC) $(SRC_UT) $(SRC_TEST)  $(LIB_G) $(LIB_S) $(LIB_W) $(LIB_M) $(INCLUDE) $(CFLAGS_UT)
clean:
			$(RM) $(OBJ)
			$(RM) libmy.a
			$(RM) *.o
			$(RM) src/*.o
			$(RM) utility/*.o
			$(RM) utility/myprintf/*.o

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(NAME_UT)
			$(RM) tests/*.o
			$(RM) *.gc*

re:			fclean all

tests_run : unit_tests
			./$(NAME_UT)
			gcovr --exclude tests -b