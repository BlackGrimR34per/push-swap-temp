# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 12:00:06 by yosherau          #+#    #+#              #
#    Updated: 2025/03/11 15:57:54 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	get_next_line.c get_next_line_utils.c

NAME			=	libgnl.a

OBJS_DIR		=	obj

OBJS			=	$(patsubst %.c, $(OBJS_DIR)/%.o, $(SRCS))

CC				=	CC

CFLAGS			=	-Wall -Wextra -Werror

AR				= 	ar rcs

RM				=	rm -rf

all:				$(NAME)

$(NAME):			$(OBJS)
					$(AR) $(NAME) $(OBJS)

$(OBJS_DIR)/%.o:	%.c | $(OBJS_DIR)
					$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
					mkdir -p $(OBJS_DIR)

clean:
					$(RM) $(OBJS_DIR)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re bonus

