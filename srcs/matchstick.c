/*
** matchstick.c for matchstick in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Feb 15 12:25:31 2017 Tiphaine LAURENT
** Last update Sun Feb 26 13:36:15 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

int		game(char **map, int nbr_lines, int max_matches)
{
  int		win;
  int		turn;

  turn = 0;
  while ((win = is_win(map)) != 0)
    {
      print_tab(map);
      if (turn == 0)
	{
	  map = player(map, nbr_lines, max_matches);
	  if (map == NULL)
	    return (0);
	}
      else if (turn == 1)
	map = ia_hard(map, nbr_lines, max_matches);
      turn = (turn + 1) % 2;
    }
  print_tab(map);
  my_putstr(WIN_MESSAGE(turn));
  return (WIN(turn));
}

int		matchstick(int nbr_lines, int matches)
{
  char		**map;

  map = fill_tab(matches);
  return (game(map, matches, nbr_lines));
}
