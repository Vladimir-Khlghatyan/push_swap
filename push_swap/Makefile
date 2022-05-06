# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 13:12:13 by vkhlghat          #+#    #+#              #
#    Updated: 2022/03/17 15:43:51 by vkhlghat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		command.c 					command_bonus.c \
			create_stack.c 				ft_argstostr.c \
			ft_arrfree.c 				ft_arrlen.c \
			ft_arrtolst.c 				ft_atoi.c \
			ft_check_extremums.c 		ft_indexing_lst.c \
			ft_isdigit.c 				ft_lstfree.c \
			ft_itoa.c 					ft_sort_check.c \
			ft_split.c 					ft_strlen.c \
			rev_rotate.c 				rev_rotate_ab.c \
			rotate.c 					rotate_ab.c \
			swap.c 						ft_isspace.c \
			ft_lstlen.c 				ft_node_to_top.c \
			ft_print_lst.c 				ft_putnbr.c \
			ft_putstr.c 				ft_sort100.c \
			ft_sort3.c 					ft_sort5.c \
			ft_sort500.c 				ft_sort_all.c \
			ft_strcmp.c 				ft_max_from_b_to_a.c \
			ft_strtoarr.c 				push.c \
			swap_ab.c 					ft_rr2.c \
			main.c 
									

OBJS 		= ${SRCS:.c=.o}

BONUS =		command.c 					command_bonus.c \
			create_stack.c 				ft_argstostr.c \
			ft_arrfree.c 				ft_arrlen.c \
			ft_arrtolst.c 				ft_atoi.c \
			ft_check_extremums.c 		ft_indexing_lst.c \
			ft_isdigit.c 				ft_lstfree.c \
			ft_itoa.c 					ft_sort_check.c \
			ft_split.c 					ft_strlen.c \
			rev_rotate.c 				rev_rotate_ab.c \
			rotate.c 					rotate_ab.c \
			swap.c 						ft_isspace.c \
			ft_lstlen.c 				ft_node_to_top.c \
			ft_print_lst.c 				ft_putnbr.c \
			ft_putstr.c 				ft_sort100.c \
			ft_sort3.c 					ft_sort5.c \
			ft_sort500.c 				ft_sort_all.c \
			ft_strcmp.c 				ft_max_from_b_to_a.c \
			ft_strtoarr.c 				push.c \
			swap_ab.c 					ft_rr2.c \
			bn_get_next_line.c 			bn_get_next_line_utils.c \
			bn_main.c
	  			
BONUS_OBJS	= ${BONUS:.c=.o}

CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

NAME		= push_swap
NAME_B		= checker

$(NAME):	${OBJS}
			${CC}  ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}
			

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME} ${NAME_B}

re:			fclean all

bonus:		${NAME_B}			

$(NAME_B):	${BONUS_OBJS}
			${CC}  ${CFLAGS} -o ${NAME_B} ${BONUS_OBJS}

.PHONY:		all clean fclean re bonus
