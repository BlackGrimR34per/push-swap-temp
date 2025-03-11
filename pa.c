/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:24:52 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 00:44:01 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack	*stacks, int to_print)
{
	if (!stacks->b)
		return ;
	if (!stacks->a)
	{
		stacks->a = stacks->b;
		stacks->b = stacks->b->next;
		stacks->b->prev = NULL;
		stacks->a->next = NULL;
		stacks->a->prev = NULL;
	}
	else
	{
		stacks->a->prev = stacks->b;
		stacks->b = stacks->b->next;
		if (stacks->b)
			stacks->b->prev = NULL;
		stacks->a->prev->next = stacks->a;
		stacks->a = stacks->a->prev;
	}
	stacks->size_b--;
	stacks->size_a++;
	if (to_print)
		write(1, "pa\n", 3);
}
