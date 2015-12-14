/*
** my_swap.c for  in /home/earvin/PiscineC/Jour3
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Wed Oct 21 12:36:04 2015 KAYONGA Earvin
** Last update Wed Oct 21 12:41:06 2015 KAYONGA Earvin
*/
void	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
