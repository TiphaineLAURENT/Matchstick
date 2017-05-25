/*
** remove_matches.c for remove_matches in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri Feb 17 16:10:34 2017 Tiphaine LAURENT
** Last update Mon Feb 20 11:58:07 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

void		disp_player(int player)
{
  if (player == 0)
    my_putstr("Player ");
  if (player == 1)
    my_putstr("AI ");
}

char		**remove_matches(char **map, int matches, int line, int player)
{
  int		x;
  int		length;
  int		to_remove;

  x = 0;
  length = my_strlen(map[line]);
  to_remove = matches;
  while (map[line][x])
    {
      if (map[line][length - x] == '|' && to_remove != 0)
	{
	  map[line][length - x] = ' ';
	  to_remove -= 1;
	}
      x += 1;
    }
  disp_player(player);
  my_putstr("removed ");
  my_putnbr(matches);
  my_putstr(" match(es) from line ");
  my_putnbr(line);
  my_putchar('\n');
  return (map);
}
