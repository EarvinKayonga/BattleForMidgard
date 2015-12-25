##
## Makefile<Battle> for  in /home/stevy/Battle for Midgard/BattleForMidgard/Battle
## 
## Made by DUBO Stévy
## Login   <dubo_s@etna-alternance.net>
## 
## Started on  Wed Dec 16 11:26:46 2015 DUBO Stévy
## Last update Fri Dec 25 11:37:10 2015 KAYONGA Earvin
##
CC 	=	gcc
CFLAGS 	= 	-W -Wall -Werror -Wextra -pedantic
NAME 	=	sta
RM 	=	rm -f
SRC 	=	../utils/getCreature.c		\
		../utils/my_putchar.c		\
		../utils/my_strcmp.c		\
		../utils/my_strncat.c		\
		../utils/my_strstr.c		\
		../utils/isalphanum.c		\
		../utils/my_put_nbr.c		\
		../utils/my_strcpy.c		\
		../utils/my_strncmp.c		\
		../utils/my_str_to_wordtab.c	\
		../utils/my_putstr.c		\
		../utils/my_strdup.c		\
		../utils/my_strncpy.c		\
		../utils/my_swap.c		\
		../utils/my_isneg.c		\
		../utils/my_strcat.c		\
		../utils/my_strlen.c		\
		../utils/my_strndup.c		\
		../utils/my_getnbr.c		\
		../utils/readline.c		\
		../Introduction/my_putstrN.c	\
		../Introduction/list.c		\
		../Introduction/element.c	\
		func.c				\
		player.c			\
		creature.c			\
		chaines.c			\
		init.c

OBJ	=	$(SRC:%.c=%.o)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all
