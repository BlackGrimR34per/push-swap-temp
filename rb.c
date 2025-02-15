/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:20:06 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/13 14:00:53 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack *stacks, int to_print)
{
	t_stack_node	*last_node;
	t_stack_node	*first_node;

	if (!stacks->b || !stacks->b->next)
		return ;
	first_node = stacks->b;
	last_node = ft_lstlast(stacks);
	stacks->b = first_node->next;
	stacks->b->prev = NULL;
	first_node->next = NULL;
	first_node->prev = last_node;
	last_node->next = first_node;
	if (to_print)
		write(1, "rb\n", 3);
}
