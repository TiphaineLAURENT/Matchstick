/*
** ia_hard.c for ia_hard in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri Feb 17 22:14:58 2017 Tiphaine LAURENT
** Last update Mon Feb 20 12:23:40 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

char		**ia_hard(char **map, int nbr_lines, int max_matches)
{
  int		to_remove;
  int		y;

  my_putstr(AI_TURN);
  to_remove = yim_addition(map);
  to_remove %= max_matches;
  if (to_remove == 0)
    to_remove = 1;
  y = 1;
  while (y <= nbr_lines)
    {
      if (line_matches(map, y) >= to_remove)
	return (map = remove_matches(map, to_remove, y, 1));
      y += 1;
      if (y > nbr_lines)
	{
	  y = 1;
	  to_remove -= 1;
	}
    }
  return (map);
}
