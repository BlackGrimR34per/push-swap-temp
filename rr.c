/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:37:23 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 00:43:05 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack *stacks, int to_print)
{
	ra(stacks, 0);
	rb(stacks, 0);
	if (to_print)
		write(1, "rr\n", 3);
}
