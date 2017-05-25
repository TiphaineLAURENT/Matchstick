/*
** player.c for player in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri Feb 17 21:50:29 2017 Tiphaine LAURENT
** Last update Sun Feb 26 13:31:12 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

int		pause_game()
{
  char		*gnl;

  while (1)
    {
      my_putstr(PROMPT_PAUSE);
      gnl = get_next_line(0);
      if (my_strcmp(gnl, "pause"))
	return (0);
    }
}

int		prompt_line()
{
  int		line;
  char		*gnl;

  my_putstr(PROMPT_LINE);
  gnl = get_next_line(0);
  if (gnl == NULL)
    return (-1);
  line = my_getnbr(gnl);
  if (my_strcmp(gnl, "quit"))
    return (-1);
  if (my_strcmp(gnl, "pause"))
    {
      pause_game();
      return (prompt_line());
    }
  free(gnl);
  if (line <= 0)
    {
      my_puterror("Error: invalid input (positive number expected)\n");
      return (prompt_line());
    }
  return (line);
}

int		prompt_matches()
{
  int		matches;
  char		*gnl;

  my_putstr(PROMPT_MATCHES);
  gnl = get_next_line(0);
  if (gnl == NULL)
    return (-1);
  matches = my_getnbr(gnl);
  if (my_strcmp(gnl, "quit"))
    return (-1);
  if (my_strcmp(gnl, "pause"))
    {
      pause_game();
      return (prompt_matches());
    }
  free(gnl);
  if (matches <= 0)
    {
      my_puterror("Error: you have to remove at least one match\n");
      return (prompt_matches());
    }
  return (matches);
}

char		**player(char **map, int nbr_lines, int max_matches)
{
  int		matches;
  int		line;

  my_putstr(PLAYER_TURN);
  line = prompt_line();
  if (line == -1)
    return (NULL);
  while (line > nbr_lines || (line_matches(map, line) == 0))
    line = prompt_line();
  matches = prompt_matches();
  if (matches == -1)
    return (NULL);
  while (matches > line_matches(map, line) || matches > max_matches)
    matches = prompt_matches();
  map = remove_matches(map, matches, line, 0);
  return (map);
}
