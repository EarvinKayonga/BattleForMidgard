/*
** utils.h for  in /home/earvin/Lab/BattleForMidgard/Introduction
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Dec 14 16:10:43 2015 KAYONGA Earvin
** Last update Mon Dec 14 18:26:02 2015 KAYONGA Earvin
*/
#ifndef		UTILS_H
#define		UTILS_H

typedef struct	s_container
{
  char		*name;
}		t_container;
  
typedef struct	s_maillon
{
  char		*name;
  t_container	*animals;
}		t_maillon;

char		*readLine();
int		my_strlen(char *str);
int		my_strcmp(char *s1, char *s2);
void		my_putstr(char *str);
void		my_putchar(char chr);
void		my_putstrN(char *str);
void		setPlayer(char *str);

#endif  /* !UTILS_H */
