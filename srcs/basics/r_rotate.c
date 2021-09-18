/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:43:18 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/18 19:35:06 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack **stacks)
{
	t_stack	*head;
	t_stack	*save;

	head = stacks[0];
	if (head && head->next)
	{
		while (head->next->next)
			head = head->next;
		save = head;
		head = head->next;
		head->next = stacks[0];
		save->next = NULL;
		stacks[0] = head;
	}
	ft_putstr_fd("rra\n", 1);
	return ;
}

void	rrb(t_stack **stacks)
{
	t_stack	*head;
	t_stack	*save;

	head = stacks[1];
	if (head && head->next)
	{
		while (head->next->next)
			head = head->next;
		save = head;
		head = head->next;
		head->next = stacks[1];
		save->next = NULL;
		stacks[1] = head;
	}
	ft_putstr_fd("rrb\n", 1);
	return ;
}

void	rrr2(t_stack **stacks)
{
	t_stack	*head;
	t_stack	*save;

	if (stacks[1] && stacks[1]->next)
	{
		head = stacks[1];
		while (head->next->next)
			head = head->next;
		save = head;
		head = head->next;
		head->next = stacks[1];
		save->next = NULL;
		stacks[1] = head;
	}
	return ;
}

void	rrr(t_stack **stacks)
{
	t_stack	*head;
	t_stack	*save;

	if (stacks[0] && stacks[0]->next)
	{
		head = stacks[0];
		while (head->next->next)
			head = head->next;
		save = head;
		head = head->next;
		head->next = stacks[0];
		save->next = NULL;
		stacks[0] = head;
	}
	rrr2(stacks);
	ft_putstr_fd("rrr\n", 1);
}
