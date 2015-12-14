/*
** setting.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Dec 14 17:21:45 2015 KAYONGA Earvin
** Last update Mon Dec 14 18:08:51 2015 KAYONGA Earvin
*/

#include	"utils.h"
#include	<stdlib.h>

char		*getArgs()
{
  char *a;

  my_putstr("Votre Tour (Quit pour quitter) > ");
  if ((a = readLine()) != NULL &&
      (!my_strcmp(a, "help me !!!")
       || !my_strcmp(a, "magic catch")))
    return a;
  else if (!my_strcmp(a, "Quit"))
    return a;
  else{
    my_putstrN("Pas compris: help me !!! ou magic catch");
    return getArgs();
  }
}

void		setPlayer(char *name)
{
  char *arg;

  my_putstr("Bienvenue ");
  my_putstrN(name);
  arg = getArgs();
  while (my_strcmp(arg, "Quit"))
    arg = getArgs();
}
