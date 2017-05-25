/*
** yim_addition.c for yim_addition in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri Feb 17 22:23:47 2017 Tiphaine LAURENT
** Last update Mon Feb 20 12:09:08 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

char		*add_bin(char *result, char *temp)
{
  int		i;

  i = 0;
  while	(temp[i])
    {
      if (temp[i] == *result)
	result[i] = '0';
      else
	result[i] = '1';
      i += 1;
    }
  return (result);
}

int		yim_addition(char **map)
{
  int		matches;
  char		*result;
  char		*temp;
  int		y;

  y = 1;
  result = my_strcat("", "00000000");
  while (map[y])
    {
      temp = my_revstr(base_me(line_matches(map, y), 2));
      result = add_bin(result, temp);
      y += 1;
    }
  matches = bin_to_dec(result);
  return (matches - 1);
}
