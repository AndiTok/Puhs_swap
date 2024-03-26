/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:32:43 by atok              #+#    #+#             */
/*   Updated: 2023/05/30 20:25:14 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h> //

# define SORTER 0
# define CHECKER 1

typedef struct s_node
{
	int				index;
	long int		data;
	struct s_node	*next;
	struct s_node	*prev;
}t_node;

typedef struct s_stack
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		counter_a;
	int		counter_b;
	int		type;
}t_stack;

void	ft_check_max(long int num);
void	ft_check_param(char *str);
void	ft_add_nodes_to_stack_a(t_stack *stack, int num);
void	ft_check_duplicate(t_stack *stack, long int num);
void	ft_index(t_stack *stack);
void	ft_sort(t_stack *stack);

void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

void	sort_123(t_stack *stack);
void	sort_3(t_stack *stack);
void	sort_4(t_stack *stack);
t_node	*ft_min(t_node *stack);
t_node	*ft_max(t_node *stack);
void	sort_5(t_stack *stack);
void	sort_6(t_stack *stack);
void	sort_big(t_stack *stack);
int		ft_sorted(t_node *stack);

long	ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *src);
#endif