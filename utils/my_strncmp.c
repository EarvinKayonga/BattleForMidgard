/*
** my_strncmp.c for  in /home/earvin/PiscineC/Jour4/my_strncmp
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Oct 22 14:18:57 2015 KAYONGA Earvin
** Last update Thu Oct 22 14:32:18 2015 KAYONGA Earvin
*/
int     my_strncmp(char *s1, char *s2, int n)
{
  int   count;

  count = 0;
  while (s1[count] && s2[count] && s2[count] == s1[count] && count < n)
    count++;
  if (s1[count] - s2[count] > 0)
    return (1);
  else if ((s1[count] - s2[count]) < 0)
    return (-1);
  else
    return (0);
}
