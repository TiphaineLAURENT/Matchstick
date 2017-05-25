/*
** is_win.c for is_win in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri Feb 17 16:32:27 2017 Tiphaine LAURENT
** Last update Sun Feb 26 13:35:26 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

int		is_win(char **map)
{
  int		matches;
  int		y;
  int		x;

  y = 0;
  matches = 0;
  while (map[y] != NULL)
    {
      x = 0;
      while (map[y][x])
	{
	  if (map[y][x] == '|')
	    matches += 1;
	  x += 1;
	}
      y += 1;
    }
  /*if (matches == 0)
    matches = 1;*/
  return (matches);
}
