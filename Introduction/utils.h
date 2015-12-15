/*
** utils.h for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Dec 14 16:10:43 2015 KAYONGA Earvin
** Last update Tue Dec 15 22:46:53 2015 KAYONGA Earvin
*/
#ifndef		UTILS_H
#define		UTILS_H

typedef struct	s_hist
{
  int		count;
}		t_hist;

typedef struct  s_creature
{
  char          *name;
  int           lvl;
  int           pv;
  int           pvmax;
  int           pm;
  int           pmmax;
}		t_creature;

typedef struct	s_player
{
  char		*name;
  t_creature	*team;
}		t_player;


typedef int	(*t_func)(t_player *current,
			  t_hist **hist,
			  t_creature *monster);

char		*readLine();
int		my_strlen(char *str);
int		my_strcmp(char *s1, char *s2);
char		*my_strcat(char *str1, char *str2);
void		my_putstr(char *str);
void		my_put_nbr(int num);
void		my_putchar(char chr);
void		my_putstrN(char *str);
void		setPlayer(char *str);
int		results();
t_creature	*getCreature();
void		release(t_player * current, t_hist *hist,
			t_creature *monster, char *arg);
int             battle(t_player *current, t_hist *hist,
		       t_creature *monster, char *arg);
void		capture(char *player, char *monster);

#endif  /* !UTILS_H */
