/*
** my_strcmp.c for in /home/earvin/PiscineC/Jour4/my_strcmp
** 
** Made by KAYONGA Earvin
** Login  <kayong_e@etna-alternance.net>
** 
** Started on  Thu Oct 22 13:23:04 2015 KAYONGA Earvin
** Last update Thu Oct 22 19:58:12 2015 KAYONGA Earvin
*/
int	my_strcmp(char *s1, char *s2)
{
  int	count;

  count = 0;
  while (s1[count] && s2[count] && s2[count] == s1[count])
    count++;
  if (s1[count] - s2[count] > 0)
      return (1);
  else if ((s1[count] - s2[count]) < 0)
      return (-1);
  else
      return (0);
}
