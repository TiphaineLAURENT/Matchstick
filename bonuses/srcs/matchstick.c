/*
** matchstick.c for matchstick in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Feb 15 12:25:31 2017 Tiphaine LAURENT
** Last update Mon Feb 20 13:46:20 2017 Tiphaine LAURENT
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
	map = player(map, nbr_lines, max_matches);
      else if (turn == 1)
	map = ia_easy(map, nbr_lines, max_matches);
      turn = (turn + 1) % 2;
    }
  my_putstr(WIN_MESSAGE(turn));
  return (WIN(turn));
}

int		matchstick(int nbr_lines, int matches)
{
  char		**map;

  map = create_tab(nbr_lines);
  my_printf("Successfully created tab\n");
  map = fill_tab(map, matches);
  my_printf("Successfully filled tab\n");
  return (game(map, nbr_lines, matches));
}
