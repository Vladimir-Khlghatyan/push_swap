/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_to_top.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:33:00 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/15 21:48:38 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

/* ft_find: gtnum e tvyal intervalum kentronic amenaheru node indexe */
int	ft_find(t_list **lst, unsigned int start, int unsigned end)
{	
	int		hold_first;
	int		hold_last;
	t_list	*tmp;

	if (!lst || !*lst)
		return (0);
	hold_first = 0;
	hold_last = 0;
	tmp = *lst;
	while (tmp && !(tmp->index >= start && tmp->index <= end))
	{
		hold_first++;
		tmp = tmp->next;
	}
	tmp = *lst;
	while (tmp)
	{
		hold_last++;
		if ((tmp->index >= start && tmp->index <= end))
			hold_last = 0;
		tmp = tmp->next;
	}
	if (hold_first < hold_last + 1)
		return (hold_first);
	return (-hold_last - 1);
}

void	ft_node_to_top_a(t_list **lst, int start, int end)
{
	int				i;
	int				limit;
	static t_list	*null_lst;

	i = end - start + 1;
	while (--i >= 0)
	{
		limit = ft_find(lst, start, end);
		if (limit < 0)
			while (limit < 0)
				limit += command(lst, &null_lst, "rra\n");
		else
			while (limit > 0)
				limit -= command(lst, &null_lst, "ra\n");
	}
}

void	ft_node_to_top_b(t_list **lst, int start, int end)
{
	int				i;
	int				limit;
	static t_list	*null_lst;

	i = end - start + 1;
	while (--i >= 0)
	{
		limit = ft_find(lst, start, end);
		if (limit < 0)
			while (limit < 0)
				limit += command(&null_lst, lst, "rrb\n");
		else
			while (limit > 0)
				limit -= command(&null_lst, lst, "rb\n");
	}
}

void	ft_node_to_top_a_with_ss(t_list **a, t_list **b, int start, int end)
{
	int				i;
	int				limit;
	static t_list	*null_lst;

	i = end - start + 1;
	while (--i >= 0)
	{
		limit = ft_find(a, start, end);
		if (limit < 0)
			while (limit < 0)
				limit += command(a, &null_lst, "rra\n");
		else
		{
			while (limit > 0)
			{
				if (limit == 1 && (*b)->next && (*b)->index < (*b)->next->index)
					limit -= command(a, b, "ss\n");
				else
					limit -= command(a, &null_lst, "ra\n");
			}
		}
	}
}
