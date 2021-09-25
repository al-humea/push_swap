/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:43:18 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/25 14:45:29 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	r_rotate(t_stack **stack)
{
	t_stack	*save;

	save = *stack;
	if (*stack && (*stack)->next)
	{
		while ((*stack)->next)
			*stack = (*stack)->next;
		save->prev = *stack;
		(*stack)->prev->next = NULL;
		(*stack)->prev = NULL;
		(*stack)->next = save;
	}
	return ;
}

void	rra(t_stack **stacks)
{
	r_rotate(&(stacks[0]));
	ft_putstr_fd("rra\n", 1);
	return ;
}

void	rrb(t_stack **stacks)
{
	r_rotate(&(stacks[1]));
	ft_putstr_fd("rrb\n", 1);
	return ;
}

void	rrr(t_stack **stacks)
{
	r_rotate(&(stacks[0]));
	r_rotate(&(stacks[1]));
	ft_putstr_fd("rrr\n", 1);
	return ;
}
