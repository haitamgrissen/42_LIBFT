# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgrissen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 04:53:47 by hgrissen          #+#    #+#              #
#    Updated: 2019/10/31 20:29:41 by hgrissen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.c

OBJECT = *.o

NAME = libft.a

all : $(NAME)

$(NAME) :
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)

clean : 
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME)

re : fclean all
