/*
** isalphanum.c for  in /home/earvin/PiscineC/Jour7/my_str_to_wordtab
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Mon Oct 26 19:55:22 2015 KAYONGA Earvin
** Last update Wed Oct 28 16:07:37 2015 KAYONGA Earvin
*/
int is_alphanum(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  else if  (c >= '0' && c <= '9')
    return (1);
  return (0);
}
