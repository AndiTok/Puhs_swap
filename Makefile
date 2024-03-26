# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atok <atok@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 12:41:18 by atok              #+#    #+#              #
#    Updated: 2023/05/30 20:37:09 by atok             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = push_swap
NAME2 = checker
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror # -fsanitize=address -g3

INCLUDE1 = puash_swap.h

INCLUDE2 = checker.h

SRCS = build_stack.c \
		check.c \
		ft_atoi.c \
		ft_index.c \
		ft_sort.c \
		minmax.c \
		push_swap.c \
		push.c \
		reverse_rotate.c \
		rotate.c \
		sort_4.c \
		sort_5.c \
		sort_6.c \
		sort_123.c \
		sort_big.c \
		swap.c \
		ft_strcmp.c \
		get_next_line_utils.c 

BONUS_SRCS = checker.c \
			input.c \
			ft_strcmp.c \
			get_next_line.c \
			get_next_line_utils.c \
			do_op.c \
			build_stack.c \
			check.c \
			ft_atoi.c \
			ft_index.c \
			sort_big.c \
			push.c \
			reverse_rotate.c \
			rotate.c \
			swap.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

make : $(NAME1)

$(NAME1): $(OBJS) # make -> mandatory
	$(CC) $(CFLAGS) -I $(INCLUDE1) $(OBJS) -o $(NAME1)

bonus: $(NAME2)

$(NAME2): $(BONUS_OBJS) # make bonus -> only bonus .c files
	$(CC) $(CFLAGS) -I $(INCLUDE2) $(BONUS_OBJS) -o $(NAME2) 

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME1) $(NAME2)

all: $(NAME1) bonus

re: fclean all