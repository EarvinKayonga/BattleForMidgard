/*
** my_strcat.c for  in /home/earvin/PiscineC/Jour4/my_strcat
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Oct 22 16:04:44 2015 KAYONGA Earvin
** Last update Sat Oct 24 20:28:57 2015 KAYONGA Earvin
*/
int	my_strlen(char *str);

char	*my_strcat(char *str1, char *str2)
{
  int	size;
  int	i;

  size = my_strlen(str1);
  i = 0;
  while (str2[i] != '\0')
    {
      str1[size + i] = str2[i];
      i++;
    }
  str1[size + i] = '\0';
  return (str1);
}
