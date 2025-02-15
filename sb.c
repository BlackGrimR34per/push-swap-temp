/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:37:34 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/14 15:28:10 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *stacks, int to_print)
{
	int	temp;

	temp = stacks->b->data;
	stacks->b->data = stacks->b->next->data;
	stacks->b->next->data = temp;
	if (to_print)
		write(1, "sb\n", 3);
}
