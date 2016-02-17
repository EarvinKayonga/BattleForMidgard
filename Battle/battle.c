
/*
** battle.c for  in /home/stevy/Battle for Midgard/kayong_e/Battle
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Tue Dec 15 13:51:52 2015 DUBO Stévy
** Last update Thu Dec 17 16:23:34 2015 KAYONGA Earvin
*/

#include		<stdlib.h>
#include		<unistd.h>
#include		"../Introduction/utils.h"

static	t_attack	g_attack[4] =
  {
    {"slash", -3},
    {"fire", -7},
    {"gamble", -1},
    {"rest", 10}
  };

t_attack		*getAttack()
{
  int			a_random;
  t_attack		*attack;

  a_random = rand() % 4;
  attack = malloc(sizeof(t_attack));
  if (attack == NULL)
    return (NULL);
  if (!attack->name)
    return (NULL);
  attack->name = my_strdup(g_attack[a_random].name);
  attack->pm = my_strdup(g_attack[a_random].pm);
  return (attack);
}

t_attack		*gamble_attack(t_creature *monster)
{
  char			*s;
  int			rd;
  t_attack		*gamble;
  int			proba;

  s = readLine();
  gamble = getAttack(g_attack[2]);
  rd = rand() % 20;
  proba = rand() % 2;
  monster = getCreature();
  if (my_strcmp(s, "gamble") == 0 && proba)
    while (monster->pv > 0)
      monster->pv = monster->pv - rd;
  return (gamble);
}

t_attack		*rest(t_creature *monster)
{
  char			*s;
  t_attack		*rest;

  s = readLine();
  rest = getAttack(g_attack[3]);
  if (my_strcmp(s, "rest") == 0)
    {
      my_putstr("Vous devez passez votre tour");
      while (monster->pv > 0 && monster->pm == 0)
	{
	  monster->pm = monster->pm + 10;
	}
    }
  return (rest);
}
