
/*
** my_str_to_word.c for  in /home/earvin/PiscineC/Jour7/my_str_to_wordtab
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Oct 26 14:24:10 2015 KAYONGA Earvin
** Last update Mon Oct 26 19:54:12 2015 KAYONGA Earvin
*/
#include <stdlib.h>

int	get_nb_words(char *);
int	get_first_ind(char *);
int	get_last_ind(char *);
char	*my_strndup(char *, int);
int	is_alphanum(char);

int   get_first_ind(char *s)
{
  int i;

  i = 0;
  while (s && s[i] && !is_alphanum(s[i]))
    ++i;
  return ((s && is_alphanum(s[i])) ? i : -1);
}

int   get_last_ind(char *s)
{
  int i;

  i = 0;
  while (s && s[i] && is_alphanum(s[i]))
    ++i;
  return i;
}

int	get_nb_words(char *s)
{
  char	*tmp;
  int	start;
  int	res;

  res = 0;
  tmp = s;
  while ((start = get_first_ind(tmp)) != -1)
    {
      tmp = tmp + start;
      tmp += get_last_ind(tmp);
      ++res;
    }
  return (res);
}


char	**my_str_to_wordtab(char *str)
{
  char	**res;
  char	*tmp;
  int	len;
  int	i;
  int	start;
  int	nb_words;

  if (!str)
    return (NULL);
  nb_words = get_nb_words(str);
  res = (char **) malloc(sizeof(char *) * (nb_words + 1));
  tmp = str;
  i = 0;
  while ((start = get_first_ind(tmp)) != -1)
    {
      tmp = tmp + start;
      len = get_last_ind(tmp);
      res[i++] = my_strndup(tmp, len);
      tmp += len;
    }
  res[i] = my_strndup("\0", 1);
  return res;
}
