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

/*USEFUL STACK DISPLAY*/
void	disp_stack(t_stack **stack)
{
	int	i;
	char array[3]={'a', 'b', 'c'};
	t_stack	*head;

	i = 0;
	while (stack[i])
	{
		head = stack[i];
		printf("stack[%c] :\n", array[i]);
		while (head)
		{
			printf("%d\n", head->nbr);
			head = head->next;
		}
		i++;
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
	t_stack	**stacks;

	stacks = NULL;
	if (ac < 2)
		display_error();
	stacks = malloc(sizeof(void *) * 3);
	if (stacks == NULL)
		display_error();
	stacks[0] = valid_av(ac, av);
	stacks[1] = NULL;
	stacks[2] = NULL;
	duplicates(stacks[0]);
	ra(stacks);
	disp_stack(stacks);
	return (0);
}
