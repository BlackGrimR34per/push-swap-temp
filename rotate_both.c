/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:19:41 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/03 21:22:44 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack *stacks, t_stack_node *node)
{
	while (stacks->b != node->target_node && stacks->a != node)
		rr(stacks);
	current_index(stacks, stacks->a, 'A');
	current_index(stacks, stacks->b, 'B');
}
