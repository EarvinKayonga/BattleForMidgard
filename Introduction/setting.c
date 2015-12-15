/*
** setting.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Dec 14 17:21:45 2015 KAYONGA Earvin
** Last update Tue Dec 15 11:54:50 2015 KAYONGA Earvin
*/

#include	"utils.h"
#include	<stdlib.h>

char		*getArgs()
{
  char		*a;

  my_putstr("Votre Tour (Quit pour quitter) > ");
  if ((a = readLine()) != NULL &&
      (!my_strcmp(a, "help me !!!")
       || !my_strcmp(a, "magic catch")))
    return a;
  else if (!my_strcmp(a, "Quit"))
    return (a);
  else{
    my_putstrN("Pas compris: help me !!! ou magic catch");
    return (getArgs());
  }
}

void		annonce(t_creature *monster, t_player *player)
{
  if (monster == NULL || player == NULL)
    return;
  my_putstr("Un ");
  my_putstr(monster->name);
  my_putstrN(" vient d'apparaitre, \n...\nQue faire ?");
}

void		setPlayer(char *name)
{
  char		*arg;
  t_player	*current;
  t_hist	*hist;
  t_creature	*monster;

  if ((current = malloc(sizeof(t_player))) == NULL ||
      (hist = malloc(sizeof(t_hist))) == NULL)
    return;
  else if ((monster = getCreature()) == NULL)
    return;
  current->name = name;
  my_putstrN(current->name); 
  annonce(monster, current);
  arg = getArgs();
  while (arg == NULL || my_strcmp(arg, "Quit"))
    {
      if (monster == NULL || battle(current, hist, monster, arg) == 1)
	return;
      monster = getCreature();
      arg = getArgs();
    }
  release(current, hist, monster, arg);
}
