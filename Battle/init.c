/*
** init.c for  in /home/earvin/Lab/BattleForMidgard/Battle
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Wed Dec 16 18:19:54 2015 KAYONGA Earvin
** Last update Thu Dec 17 12:48:36 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	<time.h>
#include	"../Introduction/utils.h"

char		*getAg()
{
  char          *a;
  int		i;
  char          *tab[4];

  tab[1] = my_strdup("let's fight");
  tab[0] = my_strdup("team");
  tab[2] = my_strdup("you are the chosen one");
  tab[3] = my_strdup("quit");
  my_putstr("Votre Tour (Quit pour quitter) > ");
  if ((a = readLine()) != NULL)
    {
      i = 0;
      while (i < 4)
	{
	  if (!my_strcmp(a, tab[i]))
	    return (a);
	  i++;
	}
    }  
  my_putstrN("Pas compris: help me !!! ou magic catch");
  return (getAg());
}

int		OptionToInt(char *option)
{
  int		i;
  char		*tab[3];

  tab[1] = my_strdup("let's fight");
  tab[0] = my_strdup("team");
  tab[2] = my_strdup("you are the chosen one");
  i = 0;
  while (option != NULL && i < 3)
    {
      if (!my_strcmp(option, tab[i]))
	return (i);
      i++;
    }
  return (i);
}

void		options(t_player *player)
{
  char		*option;
  tb_func	tab[3];

  tab[0] = &let;
  tab[1] = &team;
  tab[2] = &chosen;
  if (player == NULL)
    return;
  option = getAg();
  while (option != NULL && my_strcmp("quit", option))
    {
      tab[OptionToInt(option)](player);
      option = getAg();
    }
}

void		set(char *name)
{
  t_player	*player;

  if ((player = initPlayer(name)) == NULL)
    return;
  my_putstrN(player->name);
  aff_team(player->team);
  options(player);
}

int		main(int ac, char **ag)
{
  srand (time (NULL));
  my_putstr("Bienvenue ");
  if (ac > 2 && !my_strcmp("-n", ag[1]))
    set(ag[2]);
  else
    set("Thileli");
  return (0);
}
