/*
** chaines.c for  in /home/earvin/Lab/BattleForMidgard/Battle
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Dec 17 15:13:26 2015 KAYONGA Earvin
** Last update Thu Dec 17 15:14:50 2015 KAYONGA Earvin
*/

#include	"../Introduction/utils.h"

int		my_list_size(t_list *begin)
{
  int		count;
  t_list	*tmp;

  count = 0;
  tmp = begin;
  while (tmp != 0)
    {
      count++;
      tmp = tmp->next;
    }
  return (count);
}
