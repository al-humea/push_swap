/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:05:41 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/18 19:30:04 by al-humea         ###   ########.fr       */
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
		save->next = stacks[1];
		stacks[1] = save;
	}
	ft_putstr_fd("pb\n", 1);
}
