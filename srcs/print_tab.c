/*
** print_tab.c for print_tab in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Feb 15 12:50:09 2017 Tiphaine LAURENT
** Last update Tue Feb 21 14:27:13 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

void		print_tab(char **map)
{
  while (*map)
    {
      my_putstr(*map);
      my_putchar('\n');
      map += 1;
    }
}
