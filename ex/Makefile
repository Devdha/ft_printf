# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dha <dha@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 13:41:48 by dha               #+#    #+#              #
#    Updated: 2022/01/09 15:24:05 by dha              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c print_c.c print_s.c print_u.c print_p.c print_x.c ft_dectohex.c print_ux.c print_i.c
HDR = ft_printf.h
LIB = libft.a
LIB_DIR = libft
LIB_OBJS = libft/ft_itoa.o libft/ft_toupper.o
LIB_PATH = $(LIB_DIR)/$(LIB)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
OBJS += $(LIB_OBJS)
NAME = libftprintf.a

all : $(LIB) $(NAME)

$(NAME) : $(OBJS)
	ar rcs $@ $^ $(HDR)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB) :
	make -sC ./$(LIB_DIR)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re all
