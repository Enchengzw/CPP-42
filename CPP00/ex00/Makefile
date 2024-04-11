# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 16:38:50 by ezhou             #+#    #+#              #
#    Updated: 2024/04/11 16:02:41 by ezhou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_END=\033[0m

NAME = megaphone

CC = c++

CFLAGS = -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(COLOUR_GREEN)(•̀ᴗ•́)و $(NAME) generado!$(COLOUR_END)"

%.o : %.c
	@$(CC) -I./$(INCLUDE) -c -o $@ $<
	@echo "$(COLOUR_BLUE)(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando archivos .c$(COLOUR_END)"

clean:
	@$(RM) $(OBJ)
	@echo "$(COLOUR_RED)¯\_(ツ)_/¯ Objectos removidos!$(COLOUR_RED)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(COLOUR_RED)(╯°□°）╯︵ ┻━┻ $(NAME) removido!$(COLOUR_END)"

re: fclean all

.PHONY: all clean fclean re