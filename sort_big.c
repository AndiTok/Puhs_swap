/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:09:05 by atok              #+#    #+#             */
/*   Updated: 2023/05/30 21:11:45 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"	

int	ft_sorted(t_node *stack)
{	
	while (stack->next != NULL)
	{
		if (stack->index > stack->next->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	sort_big(t_stack *stack)
{
	int	len;
	int	i;
	int	j;

	len = stack->counter_a;
	i = 0;
	while (!ft_sorted(stack->stack_a))
	{
		j = 0;
		while (j < len)
		{					 
			if ((stack->stack_a->index >> i & 1) == 1)
				ra(stack);
			else
				pb(stack);
			j++;
		}
		while (stack->stack_b)
			pa(stack);
		i++;
	}
}
