/*
** battle.c for  in /home/stevy/Battle for Midgard/kayong_e/Battle
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Tue Dec 15 13:51:52 2015 DUBO Stévy
** Last update Thu Dec 17 12:58:14 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"../Introduction/utils.h"

void		Outofbattle(t_creature *monster)
{
  char		*str;
  t_list	*team;

  str = readLine();
  monster = getCreature();
  team = malloc(sizeof(t_list));
  my_putstr("Votre tour> \n");    
  if (my_strcmp(str, "team") == 0)
    {
      my_putstr(str);
      team = add_creature(team, monster);
      aff_team(team);
    }
  else if (my_strcmp(str, "you are the chosen one\n") == 0)
    {
      my_putstr(str);
      team->monster = getCreature();
    }
  else
    my_putstr("Vous n'avez pas rentrez de commande valide \n");
}

void		beginfight(t_list *team, t_creature *opponent)
{
  char		*name;
  char		*str;
  t_player	*tmp;

  str = readLine();
  tmp = malloc(sizeof(t_player));
  team = malloc(sizeof(t_list));
  name = malloc(sizeof(char));
  tmp->name = name;
  tmp->team = team;
  if (my_strcmp(str, "let's fight\n") == 0)
    {
      my_putstr(str);
      opponent = getCreature();
      my_putstr(opponent->name);
      team->monster = getCreature();
      my_putstr(team->monster->name);
    }
  free(tmp);
  free(team);
  free(name);
}

void		attack(t_creature *monster)
{
  int		proba;
  char		*s;
  t_creature	*opponent;

  opponent = malloc(sizeof(t_creature));
  s = readLine();
  proba = rand() % 2;
  if (my_strcmp(s, "slash\n") == 0)
    {
      my_putstr(s);
      opponent->pv = opponent->pv - 15;
      monster->pm = monster->pm - 3;
    }
  else if (my_strcmp(s, "fire\n") == 0)
    {
      my_putstr(s);
      opponent->pv = opponent->pv - 30;
      monster->pm = monster->pm - 7;
    }
  else if (my_strcmp(s, "gamble\n") == 0 && proba < 2)
    {
      my_putstr(s);
      opponent->pv = rand() % 20;
      monster->pv = rand() % 20;
    }
  free(opponent);
}
/*void		Inbattle(t_creature *monster)
{
  t_creature	*opponent;
}
*/
