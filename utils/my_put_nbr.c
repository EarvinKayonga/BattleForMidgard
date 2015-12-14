/*
** my_put_nbr.c for  in /home/earvin/PiscineC/Jour5/my_put_nbr
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Fri Oct 23 16:38:26 2015 KAYONGA Earvin
** Last update Thu Oct 29 09:17:35 2015 KAYONGA Earvin
*/
#include<unistd.h>

void	pin(int n);

void	my_put_nbr(int n)
{
  int	end;

  end = 0;
  if (n < 0)
    {
      write(1, "-",1);
      if (n != -2147483648)
	{
	  n *= -1;
	}
      else if (n == -2147483648)
	{
	  n = 214748364;
	  end = 1;
	}
    }
  pin(n);
  if (end)
    write(1, "8", 1);
}

void	pin(int n)
{
  int	res;
  char	c;
  int	nb;

  res = n % 10;
  nb = n / 10;
  if (nb != 0)
    pin(nb);
  c = res + '0';
  write(1, &c, 1);
}
