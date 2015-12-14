/*
** my_strncpy.c for  in /home/earvin/PiscineC/Jour4/my_strncpy
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Oct 22 12:34:43 2015 KAYONGA Earvin
** Last update Thu Oct 22 13:15:02 2015 KAYONGA Earvin
*/
char    *my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  while  (i < n)
    dest[i++] = '\0'; 
  return dest;
}
