/*
** my_putstr.c for  in /home/earvin/PiscineC/Jour3/my_putstr
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Wed Oct 21 11:14:22 2015 KAYONGA Earvin
** Last update Wed Oct 21 13:07:30 2015 KAYONGA Earvin
*/
void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	count;
  
  count = -1;
  while (*(str + ++count))
    {
      my_putchar(*(str + count));
    }
}
