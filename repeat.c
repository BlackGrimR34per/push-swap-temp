/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:27:42 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/12 23:43:25 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	repeat(t_stack *stacks, int nbr)
{
	t_stack_node	*temp;

	if (!stacks->a)
		return (0);
	temp = stacks->a;
	while (temp->next)
	{
		if (nbr == temp->data)
			return (1);
		temp = temp->next;
	}
	return (0);
}
