/*
** my_strlen.c for  in /home/earvin/PiscineC/Jour3/my_strlen
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Wed Oct 21 11:33:00 2015 KAYONGA Earvin
** Last update Sat Oct 24 21:52:45 2015 KAYONGA Earvin
*/
int	my_strlen(char *str)
{
  int	count;

  if(!str)
    return (0);
  count = 0;
  while (*(str + count))
    {
      count++;
    }
  return (count);  
}
