/*
** ia_easy.c for ia_easy in /home/TiphaineLaurent/CPE_2016_matchstick/bonuses/srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Mon Feb 20 12:39:51 2017 Tiphaine LAURENT
** Last update Mon Feb 20 13:49:34 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

char		**ia_easy(char **map, int nbr_lines, int max_matches)
{
  int		to_remove;
  int		y;

  to_remove = rand() % max_matches;
  if (to_remove < 1)
    to_remove = 1;
  y = 1;
  while (map[y] && y <= nbr_lines)
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
