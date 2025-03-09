/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 23:40:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 00:31:26 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack_node
{
	int					data;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

typedef struct s_stack
{
	t_stack_node	*a;
	t_stack_node	*b;
	int				size_a;
	int				size_b;
}	t_stack;

void	add_to_stack(t_stack *stacks, int nbr);
int		check_input(char *argv[]);
void	cost_analysis_a(t_stack *stacks);
void	current_index(t_stack *stacks, char stack);
t_stack_node	*find_largest_node(t_stack *stacks);
long	ft_atol(const char *str);
int		ft_isdigit(char c);
t_stack_node	*ft_lstlast(t_stack_node *node);
char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
void	init_a_nodes(t_stack *stacks);
int		input_free(char *argv[], int error);
char	**input_seperator(char *argv[]);
int		is_unsorted(t_stack_node *node);
void	pa(t_stack	*stacks);
void	pb(t_stack	*stacks);
int		repeat(t_stack *stacks, int nbr);
void	sa(t_stack *stacks);
void	sb(t_stack *stacks);
void	set_cheapest(t_stack *stacks);
void	set_target_a(t_stack *stacks);
int		stack_free(t_stack_node *node);
int		stack_init(t_stack *stacks, char *argv[]);
void	stack_sort(t_stack *stacks);
int		write_error(void);

#endif