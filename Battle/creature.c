/*
** creature.c for  in /home/earvin/Lab/BattleForMidgard/Battle
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Dec 17 13:55:28 2015 KAYONGA Earvin
** Last update Thu Dec 17 16:15:23 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	"../Introduction/utils.h"

t_creature	*getChosenOne(t_player *player)
{
  t_list	*maillon;

  if (player == NULL  || player->team == NULL)
    return (NULL);
  maillon = player->team;
  while (maillon->next != NULL && maillon != NULL)
    {
      if (maillon->index == 1)
	return (maillon->monster);
      maillon = maillon->next;
    }
  return (!maillon->monster) ? (NULL) : (maillon->monster);
}

int		giveAttack(t_creature *chosenOne, t_creature *opponent)
{
  if (chosenOne && opponent)
    return (1);
  return (0);
}

void		choose(t_list *team, int choice)
{
  t_list	*tmp;
  t_list	*purge;

  if (!team || !choice)
    return;
  tmp = team;
  purge = team;
  while (purge != NULL)
    {
      purge->index = 0;
      purge  = purge->next;
    }
   while (tmp != NULL && choice > 0)
    {
      tmp = tmp->next;
      choice--;
    }
  if (tmp->monster != NULL)
    {
      my_putstr(tmp->monster->name);
      my_putstrN(" est le favori");
    }
  tmp->index = 1;
}
