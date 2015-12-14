/*
** my_strdup.c for  in /home/earvin/PiscineC/Jour7/my_strdup
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Oct 26 12:32:39 2015 KAYONGA Earvin
** Last update Tue Oct 27 12:52:43 2015 KAYONGA Earvin
*/
#include<stdlib.h>

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  int  len;
  int  i;
  char *dest;

  if (!str)
    return NULL;

  len = my_strlen(str);
  dest = (char *) malloc(sizeof(char) * (len + 1));
  if (!dest)
    return NULL;
  for (i = 0; i < len; ++i)
    dest[i] = str[i];

  dest[i] = '\0';
  return dest;
}
