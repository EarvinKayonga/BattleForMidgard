/*
** my_getnbr.c for  in /home/earvin/PiscineC/Jour5
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Fri Oct 23 17:19:37 2015 KAYONGA Earvin
** Last update Sat Oct 24 22:26:58 2015 KAYONGA Earvin
*/
int	my_getnbr(char *str)
{
  int	multi;
  int	res;

  res = 0;
  multi = 1;
  while (('-' == (*str)) || ('+' == (*str)))
    {
      if (*str == '-')
	{
	  multi = multi * -1;
	}
      str++;
    }
  while ((*str >= '0') && (*str <= '9'))
    {
      res = (res * 10) + ((*str) - 48);
      str++;
    }
  return (res * multi);
}
