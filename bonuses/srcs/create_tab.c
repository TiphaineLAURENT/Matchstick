/*
** create_tab.c for create_tab in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Feb 15 14:04:42 2017 Tiphaine LAURENT
** Last update Thu Feb 16 18:22:14 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

char		**create_tab(int nbr_lines)
{
  int		length;
  char		**map;
  int		y;

  length = nbr_lines * 2 + 2 + 1;
  if (!(map = malloc(sizeof(char) * (length + 1))))
    return (NULL);
  if (!(map[0] = malloc(sizeof(char) * (length + 1))))
    return (NULL);
  y = 1;
  while (y < nbr_lines)
    {
      if (!(map[y] = malloc(sizeof(char) * (length + 1))))
	return (NULL);
      y += 1;
    }
  return (map);
}
