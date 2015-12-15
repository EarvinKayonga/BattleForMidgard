/*
** battle.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Tue Dec 15 11:55:01 2015 KAYONGA Earvin
** Last update Tue Dec 15 15:51:31 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	"utils.h"

void		debut(t_player *current, t_creature *monster)
{
  if (current == NULL || monster == NULL)
    return;
  my_putstr("\n Le combat entre ");
  my_putstr(current->name);
  my_putstr(" et ");
  my_putstr(monster->name);
  my_putstrN(" débute ");
}

int		magic()
{
  my_putstrN(" Magic ");
  return (1);
}

int		help()
{
  my_putstrN("\nVous tentez de prendre la suite ... \n");
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
  return tab[my_strcmp(arg, "magic catch") + 1]();
}
