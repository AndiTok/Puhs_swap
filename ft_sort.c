/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:53:39 by atok              #+#    #+#             */
/*   Updated: 2023/05/30 20:40:09 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack *stack)
{
	// if(ft_sorted(stack->stack_a) == 1)
	// 	return ;
	if (stack->counter_a <= 3)
		sort_123(stack);
	if (stack->counter_a == 4)
		sort_4(stack);
	if (stack->counter_a == 5)
		sort_5(stack);
	if (stack->counter_a == 6)
		sort_6(stack);
	else
		sort_big(stack);
}
