/*
** init.c for  in /home/earvin/Lab/BattleForMidgard/Battle
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Wed Dec 16 18:19:54 2015 KAYONGA Earvin
** Last update Thu Dec 17 11:36:31 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	<time.h>
#include	"../Introduction/utils.h"

void		set(char *name)
{
  t_player	*player;

  if ((player = initPlayer(name)) == NULL)
    return;
  my_putstrN(player->name);
  aff_team(player->team);
}

int		main(int ac, char **ag)
{
  srand (time (NULL));
  my_putstr("Bienvenue ");
  if (ac > 2 && !my_strcmp("-n", ag[1]))
    set(ag[2]);
  else
    set("Thileli");
  return (0);
}
