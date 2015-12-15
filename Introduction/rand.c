/*
** rand.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Tue Dec 15 22:35:14 2015 KAYONGA Earvin
** Last update Tue Dec 15 22:59:54 2015 KAYONGA Earvin
*/

#include	<time.h>
#include	<stdlib.h>

int		results()
{
  int		rnd;

  srand (time (NULL));
  rnd = (rand() % 3) + 1;
  return (rnd);
}
