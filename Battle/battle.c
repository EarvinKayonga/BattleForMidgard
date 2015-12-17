
/*
** battle.c for  in /home/stevy/Battle for Midgard/kayong_e/Battle
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Tue Dec 15 13:51:52 2015 DUBO Stévy
** Last update Thu Dec 17 14:20:02 2015 DUBO Stévy
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"../Introduction/utils.h"

static	t_attack	g_attack[] =
  {
    {"slash", -3},
    {"fire", -7},
    {"gamble"},
    {"rest"}
  };

t_attack	*getAttack()
{
  int		a_random;
  t_attack	*attack;

  a_random = rand() % 4;
  attack = malloc(sizeof(t_attack));
  if (attack == NULL)
    return (NULL);
  if (!attack->name)
    return (NULL);
  attack->name = my_strdup(g_attack[a_random].name);
  attack->pm = my_strdup(g_attack[a_random].pm));
return (attack);
}

t_attack	*gamble_attack()
{
  char		*s;
  int		rd;
  t_attack	*gamble;

  gmable = getAttack();
  srand(time(NULL));
  rd = rand() % 20;
  monster = getCreature();
  if (my_strcmp(s, "gamble") == 0)
    while (monster->pv > 0 && monster->pm > 0)
      {
	monster->pv = monster->pv - rd;
      }
  return (gamble);
}
