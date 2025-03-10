/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:01:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 17:40:56 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_stacks(t_stack *stacks, t_stack_node *cheapest_node)
{
	while (stacks->a != cheapest_node
		&& stacks->b != cheapest_node->target_node)
		rrr(stacks);
	current_index(stacks, 'A');
	current_index(stacks, 'B');
}
