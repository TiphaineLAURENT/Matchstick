/*
** main.c for main in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Feb 15 11:53:24 2017 Tiphaine LAURENT
** Last update Mon Feb 20 12:34:43 2017 Tiphaine LAURENT
*/

#include "matchstick.h"

void				handler(int signal)
{
  signal = signal;
}

int				main(int ac, char **av)
{
  struct	sigaction	sa;

  if (ac != 3)
    return (84);
  sa.sa_handler = handler;
  sigemptyset(&sa.sa_mask);
  sa.sa_flags = SA_RESTART;
  sigaction(SIGINT, &sa, NULL);
  sigaction(SIGQUIT, &sa, NULL);
  sigaction(SIGSEGV, &sa, NULL);
  sigaction(SIGKILL, &sa, NULL);
  return (matchstick(my_getnbr(av[1]), my_getnbr(av[2])));
}
