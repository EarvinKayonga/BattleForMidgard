/*
** main.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Dec 14 15:56:08 2015 KAYONGA Earvin
** Last update Tue Dec 15 11:52:23 2015 KAYONGA Earvin
*/

#include	"utils.h"

int		main(int argc, char **argv)
{
  my_putstr("Bienvenue ");
  if (argc > 2 && !my_strcmp("-n", argv[1]))
    setPlayer(argv[2]);
  else
    setPlayer("Thileli");
  return (0);
}
