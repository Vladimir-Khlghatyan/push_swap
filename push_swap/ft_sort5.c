/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:33:00 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/15 21:48:38 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

static unsigned int	min(t_list **lst)
{
	unsigned int		min;
	t_list				*tmp;

	tmp = *lst;
	min = tmp->index;
	while (tmp)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	return (min);
}

static unsigned int	max(t_list **lst)
{
	unsigned int		max;
	t_list				*tmp;

	tmp = *lst;
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}

int	ft_sort5(t_list **a, t_list **b)
{
	static t_list	*tmp;
	int				i;

	i = -1;
	while (++i < 2)
		command(a, b, "pb\n");
	if ((*b)->index > (*b)->next->index)
		command(a, b, "sb\n");
	ft_sort3(a, &tmp);
	i = -1;
	while (++i < 7)
	{
		if ((*b) != NULL && (*b)->index > max(a) && (*a)->index == min(a))
		{
			command(a, b, "pa\n");
			command(a, b, "ra\n");
		}
		else if ((*b) != NULL && (*a)->index > (*b)->index)
			command(a, b, "pa\n");
		else
			command(a, b, "ra\n");
		if (ft_sort_check(a, b) == 2)
			break ;
	}
	return (0);
}
