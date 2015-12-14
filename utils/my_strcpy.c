/*
** my_strcpy.c for  in /home/earvin/PiscineC/Jour4/my_strcpy
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Oct 22 12:22:04 2015 KAYONGA Earvin
** Last update Sat Oct 24 22:19:19 2015 KAYONGA Earvin
*/
int	my_strlen(char *i);

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return dest;
}
