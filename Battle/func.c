/*
** func.c for  in /home/earvin/Lab/BattleForMidgard/Battle
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Dec 17 13:05:02 2015 KAYONGA Earvin
** Last update Thu Dec 17 13:16:22 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	"../Introduction/utils.h"

void		chosen(t_player *player)
{
  if (player == NULL)
    return;
}

void		team(t_player *player)
{
  if (player == NULL)
    return;
  my_putstrN("\n---\n  TEAM : \n---");
  aff_team(player->team);
}

void		let(t_player *player)
{
  if (player == NULL)
    return;
}
