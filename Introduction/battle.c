/*
** battle.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Tue Dec 15 11:55:01 2015 KAYONGA Earvin
** Last update Tue Dec 15 12:13:50 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	"utils.h"

int		battle(t_player *current, t_hist *hist,
		       t_creature *monster, char *arg)
{
  my_putstr("\n Le combat entre ");
  my_putstr(current->name);
  my_putstr(" et ");
  my_putstr(monster->name);
  if (arg != NULL && hist != NULL)
    return (1);
  else
    return (0);
}
