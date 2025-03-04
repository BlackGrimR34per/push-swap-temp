/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:25:08 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/03 21:38:54 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_both(t_stack *stacks, t_stack_node *node)
{
	t_stack_node	*temp;

	while (stacks->b != node->target_node && stacks->a != node)
		rrr(stacks);
	current_index(stacks, stacks->a, 'A');
	current_index(stacks, stacks->b, 'B');
}
