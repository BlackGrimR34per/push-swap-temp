/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:38:59 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/13 15:50:05 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *stacks)
{
	t_stack_node	*temp;

	if (!stacks->a)
		return ;
	temp = stacks->a;
	stacks->a = stacks->a->next;
	if (stacks->a)
		stacks->a->prev = NULL;
	if (!stacks->b)
	{
		temp->next = NULL;
		temp->prev = NULL;
		stacks->b = temp;
	}
	else
	{
		temp->next = stacks->b;
		temp->prev = NULL;
		stacks->b->prev = temp;
		stacks->b = temp;
	}
	stacks->size_b++;
	stacks->size_a--;
	write(1, "pb\n", 3);
}
