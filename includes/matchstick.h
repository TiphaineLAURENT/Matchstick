/*
** matchstick.h for matchstick in /home/TiphaineLaurent/CPE_2016_matchstick
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Feb 15 12:02:47 2017 Tiphaine LAURENT
** Last update Sun Feb 26 13:38:42 2017 Tiphaine LAURENT
*/

#ifndef MATCHSTICK_H_
# define MATCHSTICK_H_

# include <signal.h>

# include "my.h"
# include "printf.h"

# define DEFAULT_LINE 4
# define DEFAULT_STICK 3

# define PLAYER_TURN "\nYour turn:\n"
# define AI_TURN "\nAI's turn...\n"
# define PROMPT_LINE "Line: "
# define PROMPT_MATCHES "Matches: "
# define PROMPT_PAUSE "Game currenly waiting \"pause\" command to unpause\n"

# define WIN(x) (x == 0 ? 1 : 2)

# define WIN_MESSAGE(x) (x == 0 ? "I lost... snif... but I'll get you next time!!\n" : "You lost, too bad...\n")

int		matchstick(int nbr_lines, int matches);
char		**fill_tab(int size);
void		print_tab(char **map);

int		line_matches(char **map, int line);
char		**remove_matches(char **map, int matches, int line, int player);

int		is_win(char **map);

char		**player(char **map, int nbr_lines, int max_matches);

char		**ia_hard(char **map, int nbr_lines, int max_matches);
int		yim_addition(char **map);
int		bin_to_dec(char *bin);

#endif /* !MATCHSTICK_H_ */
