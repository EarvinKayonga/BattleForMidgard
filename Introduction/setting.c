/*
** setting.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Dec 14 17:21:45 2015 KAYONGA Earvin
** Last update Mon Dec 14 19:25:30 2015 KAYONGA Earvin
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

void		setPlayer(char *name)
{
  char		*arg;
  t_player	*current;

  my_putstr("Bienvenue ");
  if ((current = malloc(sizeof(t_player))) == NULL)
    return;
  current->name = name;
  my_putstrN(name);
  arg = getArgs();
  while (my_strcmp(arg, "Quit"))
    arg = getArgs();
}
