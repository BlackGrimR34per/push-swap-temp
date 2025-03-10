/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:34:47 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 15:50:17 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_b_nodes(t_stack *stacks)
{
	current_index(stacks, 'A');
	current_index(stacks, 'B');
	set_b_target(stacks);
}
