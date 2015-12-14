/*
** my_strncat.c for  in /home/earvin/PiscineC/Jour4/my_strncat
** 
** Made by KAYONGA Earvin
** Login   <kayong_e@etna-alternance.net>
** 
** Started on  Thu Oct 22 17:02:43 2015 KAYONGA Earvin
** Last update Sat Oct 24 22:01:36 2015 KAYONGA Earvin
*/
int	my_strlen(char *str);

char*	my_strncat(char *str1, const char *str2, int n)
 {
   int	len1;
   int	len2;
   int	i;

   len1 = my_strlen(str1);
   len2 = my_strlen(str1);
   for (i = len1 ; i <= len1 + len2 && (i - len1) < n; i++)
     str1[i] = str2[i - len2];
   return (str1);
}
