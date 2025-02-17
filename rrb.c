/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:10:33 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/16 16:47:30 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack *stacks, int to_print)
{
	t_stack_node	*first_node;
	t_stack_node	*last_node;

	if (!stacks->b || !stacks->b->next)
		return ;
	first_node = stacks->b;
	last_node = ft_lstlast(stacks->b);
	last_node->prev->next = NULL;
	last_node->prev = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
	stacks->b = last_node;
	if (to_print)
		write(1, "rrb\n", 4);
}
