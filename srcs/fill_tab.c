/*
** fill_tab.c for fill_tab in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Feb 15 14:25:01 2017 Tiphaine LAURENT
** Last update Tue Feb 21 15:11:23 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

char		*fill_line(int y, int size, int lines)
{
  int		x;
  char		*line;

  line = malloc(sizeof(char *) * (size + 1));
  x = 0;
  while (x <= size)
    {
      if (y == 0 || y == lines - 1 || x == 0 || x == size)
	line[x] = '*';
      else if (x <= ((size / 2) + (y - 1)) && x >= ((size / 2) - (y - 1)))
	line[x] = '|';
      else
	line[x] = ' ';
      x += 1;
    }
  line[x] = '\0';
  return (line);
}

char		**fill_tab(int size)
{
  char		**map;
  int		y;
  int		lines;

  map = malloc(sizeof(char **) * (size + 3));
  lines = size + 2;
  size = 2 * size;
  y = 0;
  while (y < lines)
    {
      map[y] = fill_line(y, size, lines);
      y += 1;
    }
  map[y] = NULL;
  return (map);
}
