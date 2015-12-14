/*
** my_strstr.c for  in /home/earvin/PiscineC/Jour4/my_strstr
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Oct 22 19:47:40 2015 KAYONGA Earvin
** Last update Wed Oct 28 15:59:36 2015 KAYONGA Earvin
*/
int	my_strlen(char *s);
int	il_strncmp(char *s1, char *s2, int n);

char   *my_strstr(char *s1, char *s2)
{
  int  i;
  int  len_s1;
  int  len_s2;

  len_s1 = my_strlen(s1);
  len_s2 = my_strlen(s2);
  if (len_s2 == 0)
    return s1;
  i = 0;
  while (i <= (len_s1 - len_s2))
    {
      if (s1[i] == s2[0])
	{
	  if (il_strncmp(&s1[i], s2, len_s2) == 0)
	    return &s1[i];
	}
      i++;
    }
  return ("null");
}

int	il_strncmp(char *s1, char *s2, int n)
{
  int	i;
  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
    ++i;
  return ((s1[i] - s2[i] < 0) ? -1 : ((s1[i] - s2[i] == 0) ? 0 : 1));
}
