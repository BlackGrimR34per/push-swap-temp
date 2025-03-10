/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:27:48 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 12:40:46 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack *stacks, int to_print)
{
	t_stack_node	*last_node;

	if (!stacks->b || !stacks->b->next)
		return ;
	last_node = ft_lstlast(stacks->b);
	last_node->next = stacks->b;
	stacks->b->prev = last_node;
	stacks->b = stacks->b->next;
	stacks->b->prev = NULL;
	last_node->next->next = NULL;
	if (to_print)
		write(1, "rb\n", 3);
}
