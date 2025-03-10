/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:54:56 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 16:09:57 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_a_nodes(t_stack *stacks)
{
	current_index(stacks, 'A');
	current_index(stacks, 'B');
	set_a_target(stacks);
	cost_analysis_a(stacks);
	set_cheapest(stacks);
}
