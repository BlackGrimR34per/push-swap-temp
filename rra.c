/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:45:29 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 12:59:45 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stacks, int to_print)
{
	t_stack_node	*last_node;

	if (!stacks->a || !stacks->a->next)
		return ;
	last_node = ft_lstlast(stacks->a);
	last_node->next = stacks->a;
	last_node->prev->next = NULL;
	stacks->a->prev = last_node;
	stacks->a = last_node;
	last_node->prev = NULL;
	if (to_print)
		write(1, "rra\n", 4);
}
