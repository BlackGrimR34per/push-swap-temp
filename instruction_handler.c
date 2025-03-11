/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_handler.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:32:30 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 16:33:06 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	instruction_handler(t_stack *stacks, char *operation)
{
	if (!ft_strcmp(operation, "sa\n"))
		sa(stacks, 0);
	else if (!ft_strcmp(operation, "sb\n"))
		sb(stacks, 0);
	else if (!ft_strcmp(operation, "ss\n"))
		ss(stacks, 0);
	else if (!ft_strcmp(operation, "ra\n"))
		ra(stacks, 0);
	else if (!ft_strcmp(operation, "rb\n"))
		rb(stacks, 0);
	else if (!ft_strcmp(operation, "rr\n"))
		rr(stacks, 0);
	else if (!ft_strcmp(operation, "rra\n"))
		rra(stacks, 0);
	else if (!ft_strcmp(operation, "rrb\n"))
		rrb(stacks, 0);
	else if (!ft_strcmp(operation, "rrr\n"))
		rrr(stacks, 0);
	else if (!ft_strcmp(operation, "pa\n"))
		pa(stacks, 0);
	else if (!ft_strcmp(operation, "pb\n"))
		pb(stacks, 0);
	else
		return (write_error());
	return (0);
}
