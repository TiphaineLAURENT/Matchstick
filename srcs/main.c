/*
** main.c for main in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Feb 15 11:53:24 2017 Tiphaine LAURENT
** Last update Sun Feb 26 13:20:00 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

int				main(int ac, char **av)
{
  if (ac != 3)
    return (84);
  return (matchstick(my_getnbr(av[2]), my_getnbr(av[1])));
}
