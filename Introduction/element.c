/*
** element.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Wed Dec 16 13:38:26 2015 KAYONGA Earvin
** Last update Wed Dec 16 13:49:54 2015 KAYONGA Earvin
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
