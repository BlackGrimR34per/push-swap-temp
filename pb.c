/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:24:52 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 00:44:25 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack	*stacks, int to_print)
{
	if (!stacks->a)
		return ;
	if (!stacks->b)
	{
		stacks->b = stacks->a;
		stacks->a = stacks->a->next;
		stacks->a->prev = NULL;
		stacks->b->next = NULL;
		stacks->b->prev = NULL;
	}
	else
	{
		stacks->b->prev = stacks->a;
		stacks->a = stacks->a->next;
		if (stacks->a)
			stacks->a->prev = NULL;
		stacks->b->prev->next = stacks->b;
		stacks->b = stacks->b->prev;
	}
	stacks->size_a--;
	stacks->size_b++;
	if (to_print)
		write(1, "pb\n", 3);
}
