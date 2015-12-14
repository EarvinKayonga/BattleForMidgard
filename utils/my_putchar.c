/*
** my_putchar.c for my_putchar.c in /home/earvin/PiscineC/Jour1
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Oct 19 14:29:16 2015 KAYONGA Earvin
** Last update Mon Oct 19 14:29:22 2015 KAYONGA Earvin
*/
#include<unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
