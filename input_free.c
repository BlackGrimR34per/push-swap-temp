/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:04:02 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/11 20:09:20 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_free(char *argv[])
{
	int	row;

	row = -1;
	while (argv[++row])
		free(argv[row]);
	free (argv);
	return (write_error());
}
