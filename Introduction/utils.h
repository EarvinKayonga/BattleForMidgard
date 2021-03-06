/*
** utils.h for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Wed Dec 16 17:35:38 2015 KAYONGA Earvin
** Last update Thu Dec 17 16:24:37 2015 KAYONGA Earvin
*/

#ifndef		UTILS_H
#define		UTILS_H

#define OoB 1
#define IB 2
#define ERROR -1


typedef struct		s_attack
{
  char			*name;
  int			pm;
}			t_attack;


typedef struct		s_creature
{
  char			*name;
  int			lvl;
  int			pv;
  int			pvmax;
  int			pm;
  int			pmmax;
  t_attack		*attack;
}			t_creature;

typedef	struct		s_list
{
  t_creature		*monster;
  int			index;
  struct s_list		*next;
  struct s_list		*prev;
}			t_list;
  
typedef struct		s_player
{
  char			*name;
  t_list		*team;
}			t_player;

typedef struct		s_hist
{
  t_player		*player;
  t_creature		*opponent;
  t_attack		*attack;
  struct s_hist		*next;
  struct s_hist		*prev;
}			t_hist;

typedef int		(*t_func)(t_player *current,
				  t_hist **hist,
				  t_creature *monster);

typedef void		(*tb_func)(t_player *player);

char			*readLine();
int			my_getnbr(char *str);
int			my_strlen(char *str);
int			my_strcmp(char *s1, char *s2);
char			*my_strcat(char *str1, char *str2);
void			my_putstr(char *str);
void			my_put_nbr(int num);
void			my_putchar(char chr);
void			my_putstrN(char *str);
void			setPlayer(char *str);
int			results();
char			*my_strdup(char *str);
t_creature		*getCreature();
t_hist			*add_hist(t_hist *hist, t_player *current,
				 t_creature *monster, char *arg);
void			release(t_player * current, t_hist *hist,
				t_creature *monster, char *arg);
int			battle(t_player *current, t_hist *hist,
			       t_creature *monster, char *arg);
void			capture(char *player, char *monster);
t_list			*add_creature(t_list *list,
				      t_creature *monster);
void			aff_team(t_list *team);
void			aff_creature(t_creature *monster);
void			aff_hist(t_hist *hist);
void			debut(t_player *current, t_creature *monster);
t_player		*initPlayer(char *name);
void			chosen(t_player *player);
void			team(t_player *player);
void			let(t_player *player);
t_creature		*getChosenOne(t_player *player);
int			giveAttack(t_creature *chosenOne,
				   t_creature *opponent);
int			my_list_size(t_list *begin);
void			choose(t_list *team, int choice);
void			inBattle(t_creature *c, t_creature opponent);

#endif  /* !UTILS_H	*/
