/*
** fill_tab.c for fill_tab in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Feb 15 14:25:01 2017 Tiphaine LAURENT
** Last update Fri Feb 17 14:33:06 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

char		**fill_tab(char **map, int size)
{
  int		x;
  int		y;
  int		lines;

  lines = size + 2;
  size = 2 * size;
  y = 0;
  while (y < lines)
    {
      x = 0;
      map[y] = malloc(sizeof(char) * (size + 1));
      while (x <= size)
	{
	  if (y == 0 || y == lines - 1 || x == 0 || x == size)
	    map[y][x] = '*';
	  else if (x <= ((size / 2) + (y - 1)) && x >= ((size / 2) - (y - 1)))
	    map[y][x] = '|';
	  else
	    map[y][x] = ' ';
	  x += 1;
	}
      y += 1;
    }
  map[y] = NULL;
  return (map);
}
