# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2020/01/14 17:43:34 by bpajot       #+#   ##    ##    #+#        #
#    Updated: 2020/01/14 17:58:35 by bpajot      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = replace
CC = clang++
CC_FLAGS = -Wall -Wextra -Werror
FILES = main.cpp
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