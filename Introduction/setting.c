/*
** setting.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Dec 14 17:21:45 2015 KAYONGA Earvin
** Last update Mon Dec 14 17:54:15 2015 KAYONGA Earvin
*/

#include	"utils.h"
#include	<stdlib.h>

char		*getArgs()
{
  char *a;

  my_putstr("Votre Tour (quit pour quitter) > ");
  if ((a = readLine()) != NULL)
    return a;
  else
    return getArgs();
}

void		setPlayer(char *name)
{
  char *arg;

  my_putstr("Bienvenue ");
  my_putstrN(name);
  arg = getArgs();
  while (my_strcmp(arg, "quit"))
    arg = getArgs();
}
