/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:45:22 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/16 14:45:22 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	disp_stack(t_stack *stack)
{
	ft_putstr_fd("stack:\n", 1);
	while (stack)
	{
		printf("%d\n", stack->nbr);
		stack = stack->next;
	}
}

/*Checks for duplicates in the numbers given*/
void	duplicates(t_stack	*stack)
{
	t_stack	*cur;
	t_stack	*cmp;

	cur = stack;
	while (cur)
	{
		cmp = cur->next;
		while (cmp)
		{
			if (cmp->nbr == cur->nbr)
			{
				/*A RETIRER PRINTF*/
				printf("dup=%d\n", cur->nbr);
				display_error();
			}
			cmp = cmp->next;
		}
		cur = cur->next;
	}
	return ;
}

/*Checks if given args are valid numbers*/
t_stack	*valid_av(int ac, char **av)
{
	int			i;
	t_stack		*a;
	t_stack		*cur_a;

	i = 1;
	a = malloc(sizeof(t_stack));
	if (!a)
		exit(EXIT_FAILURE);
	a->nbr = (int)ft_atops(av[i]);
	cur_a = a;
	i++;
	while (i <= (ac - 1))
	{
		cur_a->next = malloc(sizeof(t_stack));
		if (!cur_a->next)
			exit(EXIT_FAILURE);
		cur_a = cur_a->next;
		cur_a->nbr = (int)ft_atops(av[i]);
		i++;
	}
	cur_a->next = NULL;
	return (a);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	(void)b;
	if (ac < 2)
		display_error();
	a = valid_av(ac, av);
	if (a == NULL)
		display_error();
	duplicates(a);
	sa(a);
	disp_stack(a);
	return (0);
}
