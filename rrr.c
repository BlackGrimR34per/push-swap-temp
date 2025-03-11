/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:52:09 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 00:43:30 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack *stacks, int to_print)
{
	rra(stacks, 0);
	rrb(stacks, 0);
	if (to_print)
		write(1, "rrr\n", 4);
}
