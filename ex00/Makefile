# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 14:23:00 by deryacar          #+#    #+#              #
#    Updated: 2024/08/05 14:23:03 by deryacar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
RM = rm -f
CPPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all: $(NAME)

$(NAME):
	$(CPPFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re