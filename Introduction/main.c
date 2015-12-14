/*
** main.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Dec 14 15:56:08 2015 KAYONGA Earvin
** Last update Mon Dec 14 17:33:00 2015 KAYONGA Earvin
*/

#include	"utils.h"

int		main(int argc, char **argv)
{
  if (argc > 2 && !my_strcmp("-n", argv[1]))
    setPlayer(argv[2]);
  else
    setPlayer("Thileli");
  return (0);
}
