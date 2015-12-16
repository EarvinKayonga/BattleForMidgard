/*
** struct.h for  in /home/stevy/Battle for Midgard/kayong_e/Battle
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Tue Dec 15 16:20:43 2015 DUBO Stévy
** Last update Wed Dec 16 11:03:06 2015 DUBO Stévy
*/
#ifndef	STRUCT_H
#define	STRUCT_H

#define	NBCREA 5
#define OoB 1
#define IB 2
#define ERROR -1

typedef struct  s_creature
{
  char	*name;
  int	lvl;
  int	pv;
  int  	pvmax;
  int  	pm;
  int  	pmmax;
}	t_creature;

static t_creature g_creatures[] =
{
  {"Koopa", 1, 10, 10, 20, 20},
  {"Bob bomb", 1, 10, 10, 20, 20},
  {"Yoshi", 1, 10, 10, 20, 20},
  {"Maskas", 1, 10, 10, 20, 20},
  {"Kucco", 1, 10, 10, 20, 20},
  {NULL, 0, 0, 0, 0, 0}
};

typedef	struct	s_teambattle
{
  static	t_creature g_creature[];
  s_teambattle* next;
}	t_teambattle;

typedef	struct	s_attack
{
  int	slash;
  int	fire;
  int	gamble;
  int	rest;
}	t_attack;

#endif	/* !STRUCT_H*/
