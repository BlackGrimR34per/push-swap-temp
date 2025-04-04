/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:34:05 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/20 10:39:07 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stacks, int to_print)
{
	t_stack_node	*temp;

	if (!stacks->a || !stacks->a->next)
		return ;
	temp = stacks->a;
	stacks->a = temp->next;
	temp->prev = stacks->a;
	temp->next = stacks->a->next;
	if (temp->next)
		temp->next->prev = temp;
	stacks->a->next = temp;
	stacks->a->prev = NULL;
	if (to_print)
		write(1, "sa\n", 3);
}
