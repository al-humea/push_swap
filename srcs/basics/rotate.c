/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:08:41 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/17 16:08:41 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*save;

	head = NULL;
	save = NULL;
	if (*stack && (*stack)->next)
	{
		save = (*stack)->next;
		head = *stack;
		while (head->next)
			head = head->next;
		(*stack)->next = NULL;
		head->next = *stack;
		(*stack)->prev = head;
		(*stack) = save;
		(*stack)->prev = NULL;
	}
}

void	ra(t_stack **stacks)
{
	rotate(&(stacks[0]));
	ft_putstr_fd("ra\n", 1);
	return ;
}

void	rb(t_stack **stacks)
{
	rotate(&(stacks[1]));
	ft_putstr_fd("rb\n", 1);
	return ;
}

void	rr(t_stack **stacks)
{
	rotate(&(stacks[0]));
	rotate(&(stacks[1]));
	ft_putstr_fd("rr\n", 1);
}
