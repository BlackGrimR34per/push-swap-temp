# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 18:57:40 by yosherau          #+#    #+#              #
#    Updated: 2025/03/07 23:15:07 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=		CC

SRCS		=		add_to_stack.c check_input.c current_index.c ft_atol.c ft_isdigit.c ft_lstlast.c ft_split.c ft_strchr.c \
					ft_strdup.c ft_strjoin.c ft_strlen.c ft_substr.c input_free.c input_seperator.c is_unsorted.c \
					push_swap.c repeat.c stack_free.c stack_init.c stack_sort.c write_error.c

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
