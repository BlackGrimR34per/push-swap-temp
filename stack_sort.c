/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:29:13 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/07 23:57:34 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sort(t_stack *stacks)
{
	while (stacks->size_a > 3 && is_unsorted(stacks))
	{
		init_a_nodes(stacks);
		move_a_to_b(stacks);
	}
	sort_three();
}