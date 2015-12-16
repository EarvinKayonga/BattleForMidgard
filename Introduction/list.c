/*
** list.c for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Wed Dec 16 12:15:44 2015 KAYONGA Earvin
** Last update Wed Dec 16 13:53:16 2015 KAYONGA Earvin
*/

#include		<stdlib.h>
#include		"utils.h"

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
  list->next = list;
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
  while (tmp != NULL && tmp->next != NULL
	 && tmp->monster != NULL)
    {
      my_putstrN(" ---");
      aff_creature(tmp->monster);
      tmp = tmp->next;
      my_putstrN(" ---");
    } 
}
