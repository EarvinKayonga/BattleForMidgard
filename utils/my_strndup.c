/*
** my_strndup.c for  in /home/earvin/PiscineC/Jour7/my_str_to_wordtab
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Oct 26 19:56:26 2015 KAYONGA Earvin
** Last update Wed Oct 28 16:02:59 2015 KAYONGA Earvin
*/
#include<stdlib.h>

int	my_strlen(char *);

char	*my_strndup(char *str, int size)
{
  int	len;
  int	count;
  char	*dest;

  if (str == NULL)
    {
      return NULL;
    }
  len = my_strlen(str);
  dest = malloc((len + 1) * sizeof(char));
  if (!dest)
    {
      return NULL;
    }
  count = 0;
  while (count < len && count < size)
    {
      dest[count] = str[count];
      count++;
    }
  dest[count] = '\0';
  return dest;
}
