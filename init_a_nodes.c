/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:42:28 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/04 15:29:50 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_a_nodes(t_stack *stacks)
{
	current_index(stacks, stacks->a, 'A');
	current_index(stacks, stacks->b, 'B');
	set_target_a(stacks->a, stacks->b);
	cost_analysis_a(stacks);
	set_cheapest(stacks->a);
}
