/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:27:48 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 12:40:18 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stacks, int to_print)
{
	t_stack_node	*last_node;

	if (!stacks->a || !stacks->a->next)
		return ;
	last_node = ft_lstlast(stacks->a);
	last_node->next = stacks->a;
	stacks->a->prev = last_node;
	stacks->a = stacks->a->next;
	stacks->a->prev = NULL;
	last_node->next->next = NULL;
	if (to_print)
		write(1, "ra\n", 3);
}
