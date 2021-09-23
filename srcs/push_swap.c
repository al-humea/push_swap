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

void	free_stack(t_stack *stack)
{
	t_stack	*save;

	while (stack)
	{
		save = stack;
		stack = stack->next;
		free(save);
		save = NULL;
	}
	return ;
}

/*
**USEFUL STACK DISPLAY
** MAKE MORE READABLE
*/
void	disp_stack(t_stack **stack)
{
	int		i;
	char	array[3];
	t_stack	*head;

	array[0] = 'a';
	array[1] = 'b';
	array[2] = 'c';
	i = 0;
	while (i < 2)
	{
		head = stack[i];
		ft_putstr_fd("_________________\n", 1);
		printf("stack[%c] :	||	stack[", array[i]);
		while (head)
		{
			printf("%d\n", head->nbr);
			head = head->next;
		}
		ft_putstr_fd("_________________\n", 1);
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
				printf("dup=%d\n", cur->nbr);
				free_stack(stack);
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
	a->prev = NULL;
	cur_a = a;
	i++;
	while (i <= (ac - 1))
	{
		cur_a->next = malloc(sizeof(t_stack));
		if (!cur_a->next)
			exit(EXIT_FAILURE);
		cur_a->next->prev = cur_a;
		cur_a = cur_a->next;
		cur_a->nbr = (int)ft_atops(av[i]);
		i++;
	}
	cur_a->next = NULL;
	return (a);
}

/*I NEED TO FREE MY DATA STRUCTURES DONT FORGET*/
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
	sort(stacks, ac - 1);
	printf("A\n");
	disp_stack(stacks);
	free_stack(stacks[0]);
	free_stack(stacks[1]);
	free(stacks);
	return (0);
}
