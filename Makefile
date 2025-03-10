# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 18:57:40 by yosherau          #+#    #+#              #
#    Updated: 2025/03/10 16:23:43 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=		CC

SRCS		=		add_to_stack.c check_input.c cost_analysis_a.c current_index.c 	\
					find_largest_node.c find_smallest_node.c ft_atol.c ft_isdigit.c	\
					ft_lstlast.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c	\
					ft_strlen.c ft_substr.c get_cheapest_node.c init_a_nodes.c		\
					init_b_nodes.c input_free.c input_seperator.c is_unsorted.c		\
					move_a_to_b.c move_b_to_a.c node_to_top.c pa.c pb.c 			\
					place_min_on_top.c push_swap.c ra.c rb.c repeat.c 				\
					rotate_stacks.c rr.c rra.c rrb.c rrotate_stacks.c rrr.c sa.c	\
					sb.c set_a_target.c set_b_target.c set_cheapest.c sort_three.c	\
					ss.c stack_free.c stack_init.c stack_sort.c write_error.c

OBJS_DIR	=		obj

OBJS		=		$(patsubst %.c, $(OBJS_DIR)/%.o, $(SRCS))

CFLAGS		=		-Wall -Wextra -Werror

NAME		=		push_swap

RM			=		rm -rf

all:				$(NAME)

$(NAME):			$(OBJS)
					$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o:	%.c | $(OBJS_DIR)
					$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
					mkdir -p $(OBJS_DIR)

clean:
					$(RM) $(OBJS_DIR)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
