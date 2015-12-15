/*
** capture.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Tue Dec 15 22:43:08 2015 KAYONGA Earvin
** Last update Tue Dec 15 23:04:16 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	"utils.h"

void		capture(char *player, char *monster)
{
  my_putstr("\n ");
  my_putstr(player);
  my_putstr(" a capturé ");
  my_putstr(monster);
  my_putstrN(" \n");
}
