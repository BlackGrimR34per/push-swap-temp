/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:13:18 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/14 15:27:52 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stacks, int to_print)
{
	int	temp;

	temp = stacks->a->data;
	stacks->a->data = stacks->a->next->data;
	stacks->a->next->data = temp;
	if (to_print)
		write(1, "sa\n", 3);
}
