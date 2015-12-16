/*
** mem.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Tue Dec 15 11:36:19 2015 KAYONGA Earvin
** Last update Wed Dec 16 13:11:44 2015 KAYONGA Earvin
*/

#include<stdlib.h>	
#include"utils.h"

void	recap(t_player * current, t_hist *hist)
{
  if (current == NULL || hist == NULL)
    return;
  aff_team(current->team);
}

void	release(t_player * current, t_hist *hist,
		t_creature *monster, char *arg)
{
  if (current != NULL &&
      hist != NULL &&
      monster != NULL &&
      arg != NULL)
    {
      recap(current, hist);
      free(current);
      free(hist);
      free(monster);
      free(arg);
    }
}
