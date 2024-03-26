/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:56:29 by atok              #+#    #+#             */
/*   Updated: 2023/03/18 18:52:26 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_stack *stack)
{
	t_node	*stack_a;
	int		index;
	int		min;
	int		i;

	index = 1;
	i = -1;
	while (++i < stack->counter_a)
	{
		stack_a = stack->stack_a;
		min = INT_MAX;
		while (stack_a != NULL)
		{
			if (stack_a->data < min && stack_a->index == -42)
				min = stack_a->data;
			stack_a = stack_a->next;
		}
		stack_a = stack->stack_a;
		while (stack_a != NULL)
		{
			if (stack_a->data == min)
				stack_a->index = index++;
			stack_a = stack_a->next;
		}
	}
}

		//printf("Smallest element present in stack: %d\n", min);
// while looping through the stack, cheack/compare INT_MAX with stack data
// if INT_MAX > stack data, replace with stack data
// continue to iterate and replace when needed to finnaly get he min value
// reinitalize stack_a
// loop trough the stack and index it;
// reinitalize stack_a & INT_MAX 
// REPEAT by how many node is created
//it will ignore index that are replace 
//it will only do operation when index are default -42
//-42 is from parsing in the beginning

		//stack_a = stack->stack_a;
		// while (stack_a != NULL)
		// {
		//     if (stack_a->data == min)
		//         stack_a->index = index;
		//     else if (stack_a->index == -42)
		//         stack_a->index = index++;
		//     stack_a = stack_a->next;
		// }

	// while (stack_a->next != NULL && stack_a->index == -42)
	// {
	// 	if (stack_a->data > INT_MIN)
	// 		stack_a->data = index++;
	// 	stack_a = stack->stack_a;
	// 	if (stack_a->next == NULL)
	// 		break;
	// }