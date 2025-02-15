/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:44:11 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/13 13:57:19 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stacks, int to_print)
{
	t_stack_node	*last_node;
	t_stack_node	*first_node;

	if (!stacks->a || !stacks->a->next)
		return ;
	first_node = stacks->a;
	last_node = ft_lstlast(stacks);
	stacks->a = first_node->next;
	stacks->a->prev = NULL;
	first_node->next = NULL;
	first_node->prev = last_node;
	last_node->next = first_node;
	if (to_print)
		write(1, "ra\n", 3);
}
