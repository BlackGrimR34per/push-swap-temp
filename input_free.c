/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:31:04 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/07 15:52:54 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_free(char *argv[], int error)
{
	int	row;

	row = -1;
	while (argv[++row])
		free(argv[row]);
	free(argv);
	if (error)
		return (write_error());
	return (0);
}
