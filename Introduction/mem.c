/*
** mem.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Tue Dec 15 11:36:19 2015 KAYONGA Earvin
** Last update Tue Dec 15 11:40:04 2015 KAYONGA Earvin
*/

#include<stdlib.h>	
#include"utils.h"

void	release(t_player * current, t_hist *hist,
		t_creature *monster, char *arg)
{
  free(current);
  free(hist);
  free(monster);
  free(arg);
}
