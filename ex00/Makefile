# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/01 16:39:59 by pschmunk          #+#    #+#              #
#    Updated: 2025/09/22 13:13:54 by pschmunk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

CPP_08 = find

CPP_08_SRC =	./main.cpp	\

CPP_08_OBJ = $(CPP_08_SRC:.cpp=.o)

all: $(CPP_08)

$(CPP_08): $(CPP_08_OBJ) $(LIBFT)
	$(CPP) $(CPPFLAGS) $(CPP_08_OBJ) $(LIBFT) -o find

clean:
	$(RM) $(CPP_08_OBJ)
fclean: clean
	$(RM) $(CPP_08)
re: fclean all

.PHONY : all clean fclean re