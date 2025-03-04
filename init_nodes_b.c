/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:50:17 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/04 12:20:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_nodes_b(t_stack *stacks)
{
	current_index(stacks, stacks->a, 'A');
	current_index(stacks, stacks->b, 'B');
	set_target_b(stacks);
}
