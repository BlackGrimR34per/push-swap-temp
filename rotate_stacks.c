/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:05:12 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 00:44:41 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stacks(t_stack *stacks, t_stack_node *cheapest_node)
{
	while (stacks->a != cheapest_node
		&& stacks->b != cheapest_node->target_node)
		rr(stacks, 1);
	current_index(stacks, 'A');
	current_index(stacks, 'B');
}
