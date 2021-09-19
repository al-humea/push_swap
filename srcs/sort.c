/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:16:01 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/19 21:02:16 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	median(t_stack **stack, nbr)
{
	int i;
	int lowest_nbr;
	t_stack	*save;

	i = 0;
	save = stack[0];
	lowest_nbr = stack[0]->nbr;
	stack[0] = save;/**/
	while (stack[0])
	{
		if (stack[0]->nbr < lowest_nbr)
			lowest_nbr = stack[0]->nbr;
		stack[0] = stack[0]->next;
	}
}

void	divide(t_stack **stacks, int nbr)
{
	int med;
	med = median(stack, nbr);
}

void	sort(t_stack **stacks, int nbr)
{
	if (nbr > 3)
	{
		divide(stacks, nbr);
		bubble_sort(stacks);
		conquer(stacks);
	}
	if (nbr == 2 && stacks[0]->nbr > stacks[0]->next->nbr)
		sa(stacks);
	if (nbr == 3)
	{
		if (stacks[0]->nbr > stacks[0]->next->nbr)
			sa(stacks);
		if (stacks[0]->nbr > stacks[0]->next->next->nbr)
			rra(stacks);
		else if (stacks[0]->next->nbr > stacks[0]->next->next->nbr)
		{
			rra(stacks);
			sa(stacks);
		}
	}
	return ;
}
