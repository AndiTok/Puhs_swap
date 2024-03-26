/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:25:33 by atok              #+#    #+#             */
/*   Updated: 2023/05/30 18:35:51 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int c, char **v)
{
	t_stack	stack;
	int		i;

	stack.type = SORTER;
	stack.stack_a = NULL;
	stack.stack_b = NULL;
	stack.counter_a = 0;
	stack.counter_b = 0;
	i = 1;
	if (c > 1)
	{
		while (v[i])
		{
			ft_check_param(v[i]);
			ft_check_max(ft_atoi(v[i]));
			ft_add_nodes_to_stack_a(&stack, ft_atoi(v[i]));
			ft_check_duplicate(&stack, ft_atoi(v[i]));
			i++;
		}
		ft_index(&stack);
		ft_sort(&stack);
	}
}
	// }
	// 	//int chk = ft_sorted(stack.stack_a);
	// 	//printf("Is it sorted: %d \n", chk); 
	// int a = 0;
	// if (stack.stack_a != NULL)
	// {
	// 	while (stack.stack_a->next != NULL)
	// 	{
	// 		printf("A%d: %ld i%d\n", a + 1, stack.stack_a->data,
	// 		stack.stack_a->index); 
	// 		//print 1st node till last but exit at last node
	// 	stack.stack_a = stack.stack_a->next;
	// 		a++;
	// 	}
	// 	printf("A%d: %ld i%d\n", a + 1, stack.stack_a->data, 
	// 	stack.stack_a->index); // print last node
	// 	write (1, "\n" , 1);
	// 	while (stack.stack_a != NULL) 
	// 	{
	// 		printf("A%d: %ld i%d\n", a + 1, stack.stack_a->data, 
	// 		stack.stack_a->index); // print from back to front till first node
	// 		stack.stack_a = stack.stack_a->prev;
	// 		a--;
	// 	}
	// }
	// write (1, "\n" , 1);
	// /*----------------------------------*/
	// int b = 0;
	// if (stack.stack_b != NULL)
	// {
	// 	while (stack.stack_b->next != NULL)
	// 	{
	// 		printf("B%d: %ld i%d\n", b + 1, stack.stack_b->data, 
	// 		stack.stack_b->index); 
	// 		//print 1st node till last but exit at last node
	// 		stack.stack_b = stack.stack_b->next;
	// 		b++;
	// 	}
	// 	printf("B%d: %ld i%d\n", b + 1, stack.stack_b->data, 
	// 		stack.stack_b->index); // print last node
	// 	write (1, "\n" , 1);
	// 	while (stack.stack_b != NULL)
	// 	{
	// 		printf("B%d: %ld i%d\n", b + 1, stack.stack_b->data, 
	// 		stack.stack_b->index); // print from back to front till first node
	// 		stack.stack_b = stack.stack_b->prev;
	// 		b--;
	// 	}
	// }
	// printf("number of A nodes %d\n", stack.counter_a);
	// printf("number of B nodes %d\n", stack.counter_b);
