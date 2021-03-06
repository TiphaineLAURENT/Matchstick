##
## Makefile for Makefile in /home/TiphaineLaurent/CPE_2016_matchstick
## 
## Made by Tiphaine LAURENT
## Login   <TiphaineLaurent@epitech.net>
## 
## Started on  Wed Feb 15 11:38:54 2017 Tiphaine LAURENT
## Last update Thu May 25 16:34:36 2017 Tiphaine LAURENT
##

CC		=	gcc
CFLAGS		=	-W -Wall
#CFLAGS		+=	-ansi -pedantic
CPPFLAGS	=	-I ./includes

LDFLAGS		=	-lmy -lprintf -L./libs

RM		=	rm -f

NAME		=	matchstick

DIR		=	./srcs/
SRCS		=	main.c			\
			matchstick.c		\
			fill_tab.c		\
			print_tab.c		\
			line_matches.c		\
			remove_matches.c	\
			is_win.c		\
			player.c		\
			ia_hard.c		\
			yim_addition.c		\
			bin_to_dec.c

OBJS		=	$(foreach SRCS,$(SRCS),$(DIR)$(SRCS:.c=.o))


all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
