/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:33:02 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 16:17:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "gnl/get_next_line.h"
# include "push_swap.h"

int		ft_strcmp(const char *s1, const char *s2);
int		instruction_handler(t_stack *stacks, char *operation);
void	instruction_reader(t_stack *stacks);

#endif