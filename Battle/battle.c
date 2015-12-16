/*
** battle.c for  in /home/stevy/Battle for Midgard/kayong_e/Battle
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Tue Dec 15 13:51:52 2015 DUBO Stévy
** Last update Wed Dec 16 22:56:03 2015 DUBO Stévy
*/

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include"../Introduction/utils.h"

void		my_putstr(char* str);
void		my_put_nbr(int n);
t_creature      *getCreature();
char		*readline();
void		debut(t_player *current, t_creature *monster);

void		aff_list(t_creature *monster)
{
  monster = getCreature();
  my_putstr(monster->name);
  my_put_nbr(monster->lvl);
  my_put_nbr(monster->pv);
  my_put_nbr(monster->pvmax);
  my_put_nbr(monster->pm);
  my_put_nbr(monster->pmmax);
}

void		Outofbattle(t_creature *monster)
{
  char		*str;
  t_list	*list;
  t_player	*player;
  
  my_putstr("Votre tour> ");    
  str = readline();
  if (list != NULL)
    if (str == "team")
      {
	my_putstr(str);
	aff_list(list);
      }
  else if (str == "you are the chosen one")
    {
      my_putstr(str);
      list->monster = getCreature();
    }
  else if (str == "let's fight")
    {
      my_putstr(str);
      debut(player, monster);
    }
  else
    my_putstr("Vous n'avez pas rentrez de commande valide");
}

void		attack(t_creature *monster)
{
  char		*s;
  t_creature	*opponent;

  s = readline();
  if (s == "slash")
    {
      my_putstr(s);
      opponent->pv = opponent->pv - 15;
      monster->pm = monster->pm - 3;
    }
  else if (s == "fire")
    {
      my_putstr(s);
      crea->pv = crea->pv - 30;
      monster->pm = monster->pm - 7;
    }
  else if (s == "gamble" && (monster || opponent))
    {
      my_putstr(s);
      opponent->pv = rand() % 21;
      monster->pv = rand() % 21;
    }
}
void		Inbattle(t_creature *monster)
{
  t_creature	*opponent;

  monster = getCreature();
  opponent = getCreature();
}
