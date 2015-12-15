##
## Makefile for  in /home/earvin/Lab/BattleForMidgard/Introduction
##
## Made by KAYONGA Earvin
## Login   <kayong_e@etna-alternance.net>
## 
## Started on  Mon Dec 14 15:52:54 2015 KAYONGA Earvin
## Last update Tue Dec 15 11:41:21 2015 KAYONGA Earvin
##
CC 	=	gcc
CFLAGS 	= 	-W -Wall -Werror -Wextra
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
		../utils/my_getnbr.c		\
		../utils/my_putstr.c		\
		../utils/my_strdup.c		\
		../utils/my_strncpy.c		\
		../utils/my_swap.c		\
		../utils/my_isneg.c		\
		../utils/my_strcat.c		\
		../utils/my_strlen.c		\
		../utils/my_strndup.c		\
		../utils/readline.c		\
		my_putstrN.c			\
		mem.c				\
		setting.c			\
		main.c

OBJ	=	$(SRC:%.c=%.o)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all
