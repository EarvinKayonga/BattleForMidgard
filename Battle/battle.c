/*
** battle.c for  in /home/stevy/Battle for Midgard/kayong_e/Battle
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Tue Dec 15 13:51:52 2015 DUBO Stévy
** Last update Wed Dec 16 11:23:10 2015 KAYONGA Earvin
*/

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include"../Introduction/utils.h"

void	my_putstr(char* str);

void	aff_list(t_teambattle* p)
{
}

int	long_list(t_teambattle* t)
{
  int	size;

  size = 0;
  if (t == NULL)
      return 0;
  else
    {
      while (t != NULL)
	{
	  t->next;
	  size++;
	}
    }
  return size;
}

void	Outofbattle()
{
  char	**argv;
  t_teambattle *list;

  argv[1] = "Votre tour> "
  argv[2] = readline();
  my_putstr(argv[1]);
  if (argv[2] == "team")
    if (list != NULL)
      {
	aff_list(list);
      }	
  else if (argv[2] == "you are the chosen one")
    { 
    }
  free(argv[2]);
}

void	Inbattle()
{
  int	random;

  random = rand() % NBCREA;
  if (random)
    {
    }    
}
