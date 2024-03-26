/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:10:29 by atok              #+#    #+#             */
/*   Updated: 2023/03/15 13:46:23 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_6(t_stack *stack)
{
	t_node	*tmp;

	while (stack->counter_a != 3)
	{	
		tmp = ft_min(stack->stack_a);
		while (tmp->prev != NULL)
		{
			if (tmp->next == NULL || tmp->next->next == NULL)
				rra(stack);
			else
				ra(stack);
		}
		pb(stack);
	}
	sort_3(stack);
	pa(stack);
	pa(stack);
	pa(stack);
}
