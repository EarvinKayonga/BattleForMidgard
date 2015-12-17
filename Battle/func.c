/*
** func.c for  in /home/earvin/Lab/BattleForMidgard/Battle
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Dec 17 13:05:02 2015 KAYONGA Earvin
** Last update Thu Dec 17 16:22:56 2015 KAYONGA Earvin
*/

#include	<stdlib.h>
#include	"../Introduction/utils.h"

void		chosen(t_player *player)
{
  char		*choice;

  if (player == NULL)
    return;
  aff_team(player->team);
  my_putstr("Choissisez entre 0 et ");
  my_put_nbr(my_list_size(player->team) - 1);
  my_putstr(" > ");
  choice = readLine();
  while (my_getnbr(choice) <  0 ||
	 my_getnbr(choice) >= my_list_size(player->team))
    {
      my_putstr("Entre 0 et ");
      my_put_nbr(my_list_size(player->team) - 1);
      my_putstr(" > ");
      choice = readLine();
    }
  my_putstr("La créature n°");
  my_put_nbr(my_getnbr(choice));
  my_putstrN(" est votre favori");
  choose(player->team, my_getnbr(choice));
}

void		team(t_player *player)
{
  if (player == NULL)
    return;
  my_putstrN("\n---\n  TEAM : \n---");
  aff_team(player->team);
}

void		let(t_player *player)
{
  if (player == NULL)
    return;
  
}
