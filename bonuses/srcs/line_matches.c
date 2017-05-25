/*
** line_matches.c for line_matches in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri Feb 17 15:51:00 2017 Tiphaine LAURENT
** Last update Fri Feb 17 16:29:38 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

int		line_matches(char **map, int line)
{
  int		x;
  int		matches;

  line = line;
  x = 0;
  matches = 0;
  while (map[line][x])
    {
      if (map[line][x] == '|')
	matches += 1;
      x += 1;
    }
  return (matches);
}
