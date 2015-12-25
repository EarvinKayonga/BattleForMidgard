/*
** list.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Wed Dec 16 12:15:44 2015 KAYONGA Earvin
** Last update Fri Dec 25 11:35:08 2015 KAYONGA Earvin
*/

#include		<stdlib.h>
#include		"utils.h"

t_hist			*add_hist(t_hist *list, t_player *pl, t_creature *m, char* arg)
{
  t_hist                *node;
  t_attack		*attack;

  if ((node = malloc(sizeof(t_hist))) == NULL || m == NULL)
    return (NULL);
  else if (pl == NULL || list == NULL)
    return (NULL);
  node->next = list;
  node->prev = NULL;
  list->next = list;
  list->prev = node;
  node->player = pl;
  if ((attack = malloc(sizeof(t_attack))) != NULL &&
      (attack = malloc(sizeof(char*))) != NULL
      && (attack->name = arg))
    node->attack = attack;
  node->opponent = m;
  return (node);
}

t_list			*add_creature(t_list *list,
				     t_creature *monster)
{
  t_list		*node;

  if ((node = malloc(sizeof(t_list))) == NULL || monster == NULL)
    return (NULL);
  else if (list == NULL)
    return (NULL);
  node->next = list;
  node->prev = NULL;
  list->next = NULL;
  list->prev = node;
  node->monster = monster;
  return (node);
}

void			aff_team(t_list *list)
{
  t_list		*tmp;

  if (list == NULL)
    return;
  tmp = list;
  my_putstrN(" Liste de créatures de la team : \n ");
  while (tmp != NULL
	 && tmp->monster != NULL)
    {
      my_putstrN(" ---");
      if (tmp->index)
	my_put_nbr(tmp->index);
      aff_creature(tmp->monster);
      tmp = tmp->next;
      my_putstrN(" ---");
    } 
}
