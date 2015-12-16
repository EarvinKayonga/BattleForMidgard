/*
** battle.c for  in /home/stevy/Battle for Midgard/kayong_e/Battle
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Tue Dec 15 13:51:52 2015 DUBO Stévy
** Last update Wed Dec 16 21:04:08 2015 DUBO Stévy
*/

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include"../Introduction/utils.h"

void		my_putstr(char* str);

void		aff_list(t_creature *monster)
{
  monster = getCreature();
  my_putstr(monster->name);
  my_putnbr(monster->lvl);
  my_putnbr(monster->pv);
  my_putnbr(monster->pvmax);
  my_putnbr(monster->pm);
  my_putnbr(monster->pmmax);
}

void		Outofbattle(t_list *list)
{
  char		*str;
  t_creature	*monster;
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
  t_creature	*crea;

  s = readline();
  if (s == "slash")
    {
      my_putstr(s);
      crea->pv = crea->pv - 15;
      monster->pm = monster->pm - 3;
    }
  else if (s == "fire")
    {
      my_putstr(s);
      crea->pv = crea->pv - 30;
      monster->pm = monster->pm - 7;
    }
  else if (s == "gamble" && (monster || crea))
    {
      my_putstr(s);
      crea->pv = rand() % 21;
      monster->pv = rand() % 21;
    }
}
void		Inbattle(t_creature *monster)
{
  t_creature	*crea;

  monster = getCreature();
  crea = getCreature();
}
