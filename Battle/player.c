/*
** player.c for  in /home/earvin/Lab/BattleForMidgard/Battle
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Dec 17 10:30:41 2015 KAYONGA Earvin
** Last update Thu Dec 17 11:40:49 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	<time.h>
#include	"../Introduction/utils.h"

t_player	*initPlayer(char *name)
{
  t_player	*tmp;
  t_list	*team;
  t_creature	*monster;
  t_creature	*monster2;

  if ((tmp = malloc(sizeof(t_player))) == NULL ||
      (team = malloc (sizeof(t_list))) == NULL)
    return (NULL);
  srand (time (NULL));
  if ((monster = getCreature()) != NULL &&
      (monster2 = getCreature()) != NULL &&
      (team = add_creature(team, monster)) != NULL &&
      (team = add_creature(team, monster2)) != NULL)
    tmp->team = team;
  tmp->name = name;
  return (tmp);
}
