/*
** main.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Dec 14 15:56:08 2015 KAYONGA Earvin
** Last update Thu Dec 17 11:53:29 2015 KAYONGA Earvin
*/

#include	<time.h>
#include	<stdlib.h>
#include	"utils.h"

int		main(int argc, char **argv)
{
  my_putstr("Bienvenue ");
  srand(time(NULL)); 
  if (argc > 2 && !my_strcmp("-n", argv[1]))
    setPlayer(argv[2]);
  else
    setPlayer("Thileli");
  return (0);
}
