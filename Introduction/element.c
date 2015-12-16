/*
** element.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Wed Dec 16 13:38:26 2015 KAYONGA Earvin
** Last update Wed Dec 16 17:32:38 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	"utils.h"

void		aff_creature(t_creature *monster)
{
  if (monster == NULL)
    return;
  my_putstr("\n Name: ");
  my_putstrN(monster->name);
  my_putstr("\n Level: ");
  my_put_nbr(monster->lvl);
  my_putstr("\n PV restant: ");
  my_put_nbr(monster->pv);
  my_putstr("\n PV max: ");
  my_put_nbr(monster->pvmax);
  my_putstr("\n PM restant: ");
  my_put_nbr(monster->pm);
  my_putstr("\n PM max: ");
  my_put_nbr(monster->pmmax);
  my_putstrN(" ");
}

void		aff_hist(t_hist *hist)
{
  t_hist	*tmp;

  if (hist == NULL)
    return;
  tmp = hist;
  if (tmp->player != NULL &&
      tmp->opponent != NULL &&
      tmp->player->name != NULL &&
      tmp->attack->name != NULL)
    my_putstrN("\n Historique des attaques : \n");
  while (tmp != NULL && tmp->next != NULL
	 && tmp->opponent != NULL &&
	 tmp->player->name != NULL &&
	 tmp->attack->name != NULL)
    {
      my_putstr(tmp->player->name);
      my_putstr(" tente un ");
      my_putstr(tmp->attack->name);
      my_putstrN(" sur ");
      aff_creature(tmp->opponent);
      tmp = tmp->next;
      my_putstrN(" ---");
    }
}
