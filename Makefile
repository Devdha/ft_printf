# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dha <dha@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 13:41:48 by dha               #+#    #+#              #
#    Updated: 2022/01/09 13:57:18 by dha              ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c print_c.c print_s.c print_i.c print_u.c print_p.c print_x.c print_ux.c ft_dectohex.c
HDR = ft_printf.h
LIB = libft/libft.a
LIB_DIR = libft

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all : $(NAME) $(LIB)

$(NAME) : $(OBJS)
	cd $(LIB_DIR) && make && make clean && cd .. && ar rcs $@ $^ $(HDR) $(LIB)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I./$(LIB_DIR)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re all