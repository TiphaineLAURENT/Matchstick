/*
** get_next_line.h for get_next_line in /home/TiphaineLaurent/CPE_2016_getnextline
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Jan  3 15:41:33 2017 Tiphaine LAURENT
** Last update Thu May 25 15:52:39 2017 Tiphaine LAURENT
*/

#ifndef GET_NEXT_LINE_
# define GET_NEXT_LINE_

# include <stdlib.h>
# include <unistd.h>

# ifndef READ_SIZE
#  define READ_SIZE 1024
# endif /* !READ_SIZE */

char		*get_next_line(const int fd);

#endif /* !GET_NEXT_LINE_ */
