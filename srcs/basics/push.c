/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:05:41 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/25 14:45:28 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack **stacks)
{
	t_stack	*save;

	if (stacks[1])
	{
		save = stacks[1];
		stacks[1] = stacks[1]->next;
		if (stacks[1])
			stacks[1]->prev = NULL;
		if (stacks[0])
			stacks[0]->prev = save;
		save->next = stacks[0];
		stacks[0] = save;
	}
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **stacks)
{
	t_stack	*save;

	if (stacks[0])
	{
		save = stacks[0];
		stacks[0] = stacks[0]->next;
		if (stacks[0])
			stacks[0]->prev = NULL;
		if (stacks[1])
			stacks[1]->prev = save;
		save->next = stacks[1];
		stacks[1] = save;
	}
	ft_putstr_fd("pb\n", 1);
}
