# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 17:55:21 by llucente          #+#    #+#              #
#    Updated: 2021/08/06 18:11:37 by llucente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++

CFLAGS = -Wall -Werror -Wextra -g -std=c++98 -pedantic

SRCS = *.cpp

INC = *.hpp

OBJS_DIR = objs
CURRENT_FOLDER = $(shell pwd)
OBJS_PATH = $(addprefix $(CURRENT_FOLDER)/, $(DIR_OBJS))
OBJS_FILES = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR)/, $(OBJS_FILES))

all: $(NAME)

$(OBJS): $(SRCS)
			$(CC) $(CFLAGS) $(SRCS) -c
			mkdir -p objs
			mv -f *.o $(OBJS_DIR)

$(NAME): $(OBJS)
			@echo COMPILING... $(NAME)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo COMPILING OK!

clean:
	@echo Deleting files
	rm -f $(OBJS)

fclean: clean
	@echo Deleting $(NAME)
	rm $(NAME)
	rm -rf *.o
	@echo DELETING OK!

re: fclean all

.PHONY: all clean fclean re
