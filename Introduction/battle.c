/*
** battle.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Tue Dec 15 11:55:01 2015 KAYONGA Earvin
** Last update Fri Dec 18 11:03:19 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	"utils.h"

void		debut(t_player *current, t_creature *monster)
{
  if (current == NULL || monster == NULL)
    return;
  my_putstr("\nLe combat entre ");
  my_putstr(current->name);
  my_putstr(" et ");
  my_putstr(monster->name);
  my_putstrN(" débute \n");
}

int		magic(t_player *current, t_hist **hist,
		      t_creature *monster)
{
  t_list *tmp;
  t_hist *tmphist;

  if (current  != NULL && hist != NULL && monster != NULL)
    {
      my_putstr(current->name);
      my_putstrN(" tente de capturer la créature \n");
      if ((tmphist = add_hist(*hist, current, monster, "magic catch")) != NULL)
	*hist = tmphist;
      if (results() > 2)
	{
	  if ((current->team = malloc(sizeof(t_list))) != NULL
	     && (tmp = add_creature(current->team, monster)) != NULL)
	      current-> team = tmp;
	  capture(current->name, monster->name);
	  return (1);
	}
      my_putstrN("\n Ca n'a pas marché \n  ");
      my_putstr(monster->name);
      my_putstrN(" s'énerve et vous charge violemment, vous poussant à fuir.");
    }
  return (0);
}

int		help(t_player *current, t_hist **hist,
		      t_creature *monster)
{
  t_hist *tmphist;

  my_putstrN("\nVous tentez de prendre la fuite ... \n");
  my_putstrN("\n ... fuite réussie ... \n");
  if ((tmphist = add_hist(*hist, current, monster, "help me !!!")) != NULL)
    *hist = tmphist;
  if (current && hist && monster)
    return (0);
  return (0);
}

int		battle(t_player *current, t_hist *hist,
		       t_creature *monster, char *arg)
{
  t_func	tab[2];

  tab[0] = &help;
  tab[1] = &magic;
  debut(current, monster);
  if (arg == NULL || hist == NULL)
    return (1);
  return tab[my_strcmp(arg, "magic catch") + 1](current,
						&hist,
						monster);
}
