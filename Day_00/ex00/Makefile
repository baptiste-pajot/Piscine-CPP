# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2020/01/13 10:07:52 by bpajot       #+#   ##    ##    #+#        #
#    Updated: 2020/01/13 10:17:27 by bpajot      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = megaphone
CC = clang++
CC_FLAGS = -Wall -Wextra -Werror
FILES = megaphone.cpp
SRCS = $(FILES)
OBJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "CREATION DE L'EXECUTABLE"
	@$(CC) $(CC_FLAGS) -o $@ $^
	@echo "COMPILATION EXECUTABLE REUSSIE 👍"

%.o: %.cpp
	@echo "creation $@ "
	@$(CC) $(CC_FLAGS) -o $@ -c $<
	@echo "compilation $@ ok 👍"

clean:
	@/bin/rm -f $(OBJS)
	@echo "NETTOYAGE REUSSIE 👍"

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all