/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:59:52 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 14:48:55 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack *stacks, int to_print)
{
	t_stack_node	*last_node;

	if (!stacks->b || !stacks->b->next)
		return ;
	last_node = ft_lstlast(stacks->b);
	last_node->next = stacks->b;
	last_node->prev->next = NULL;
	stacks->b->prev = last_node;
	stacks->b = last_node;
	last_node->prev = NULL;
	if (to_print)
		write(1, "rrb\n", 4);
}
