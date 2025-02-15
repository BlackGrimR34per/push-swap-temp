/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:38:59 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/13 15:49:49 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stacks)
{
	t_stack_node	*temp;

	if (!stacks->b)
		return ;
	temp = stacks->b;
	stacks->b = stacks->b->next;
	if (stacks->b)
		stacks->b->prev = NULL;
	if (!stacks->a)
	{
		temp->next = NULL;
		temp->prev = NULL;
		stacks->a = temp;
	}
	else
	{
		temp->next = stacks->a;
		temp->prev = NULL;
		stacks->a->prev = temp;
		stacks->a = temp;
	}
	stacks->size_a++;
	stacks->size_b--;
	write(1, "pa\n", 3);
}
