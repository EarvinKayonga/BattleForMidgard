/*
** utils.h for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Dec 14 16:10:43 2015 KAYONGA Earvin
<<<<<<< HEAD
** Last update Wed Dec 16 15:58:53 2015 DUBO Stévy
=======
** Last update Wed Dec 16 13:41:08 2015 KAYONGA Earvin
>>>>>>> 8875436d13519bb27ea40a453792c325cfca74e5
*/
#ifndef		UTILS_H
#define		UTILS_H

#define OoB 1
#define IB 2
#define ERROR -1


typedef struct	s_hist
{
  int		count;
}		t_hist;

typedef struct  s_attack
{
  struct s_attack	*next;
  char			*name;
  int			pm;
}		t_attack;

typedef struct  s_creature
{
  char          *name;
  int           lvl;
  int           pv;
  int           pvmax;
  int           pm;
  int           pmmax;
  t_attack	*attack;
}		t_creature;

typedef	struct	s_list
{
  t_creature	*monster;
  struct s_list	*next;
  struct s_list	*prev;
}		t_list;
  
typedef struct	s_player
{
  char		*name;
  t_list	*team;
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
t_list          *add_creature(t_list *list,
			     t_creature *monster);
void		aff_team(t_list *team);
void		aff_creature(t_creature *monster);

#endif  /* !UTILS_H */
