##
## Makefile for  in /home/earvin/Lab/BattleForMidgard/Introduction
## 
## Made by KAYONGA Earvin
## Login   <kayong_e@etna-alternance.net>
## 
## Started on  Mon Dec 14 15:52:54 2015 KAYONGA Earvin
## Last update Mon Dec 14 16:15:19 2015 KAYONGA Earvin
##
CC 	=	gcc
CFLAGS 	= 	-W -Wall -Werror
NAME 	=	sta
RM 	=	rm -f
SRC 	=	main.c\
		../utils/*

OBJ	=	$(SRC:%.c=%.o)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all
